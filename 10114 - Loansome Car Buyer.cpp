#include <bits/stdc++.h>
using namespace std;
// duration loan   ---> dl
// down payment    ---> dp
// amount loan     ---> al
// number records  ---> nr
// monthly payment ---> mp
// month depreciation ---> md
// initial value ---> iv
int main(){
    int dl, nr;
    double dp, al;
    while( cin >> dl >> dp >> al >> nr ) {
    	if( dl < 0 ) return 0;
    	float mp = al / dl;
    	vector<double> md( dl + 1, 0 );
    	int month;
	double depreciation; 
	while( nr-- ) {
    		cin >> month >> depreciation;
    		md[month] = depreciation;
	}
	for( int i = 1 ; i < dl + 1 ; i++ ) {
		if( md[i] == 0) md[i] = md[i-1];
	}
	float iv = al + dp;
	month = 0;   	
    	while(1) {
    		iv *= ( 1 - md[month] ) ;
    		if( iv > al && month == 1 ) {
    			cout << month << " month" << endl; break;
		}
    		else if( iv > al && month != 1 ) {
			cout << month << " months" << endl; break;	
		}
    		al -= mp;
    		month++;
		}    	
	}

    return 0;
}
