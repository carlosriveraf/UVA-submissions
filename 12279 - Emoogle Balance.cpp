#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; int number_case = 1;
	while( cin>>N ) {
		
		if( N == 0 ) { return 0; }
		else{
			int x;
			int may = 0, cer = 0;
			
			for( int i = 1 ; i <=N ; i++ ) {
				cin>>x;
				if( x > 0 ) { may++; }
				else{ cer++; }
			}
			
			cout<<"Case "<<number_case<<": "<<may-cer<<endl;
			number_case++;
		}
	}
	
	return 0;
}
