#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	int money = 0;
	
	while( T-- ) {
		string s; cin>>s;
		int extra;
			
		if( s == "report" ) { cout<<money<<endl; }
		else if( s == "donate" ) {
			cin>>extra;
			money += extra;
		}	
	}
	
	return 0;
}
