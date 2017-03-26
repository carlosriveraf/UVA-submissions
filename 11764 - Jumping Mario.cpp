#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	int k = 1;
	
	while( T-- ) {
		int N; cin>>N;
		int j[N];
		int h_j = 0, l_j = 0;
		
		for( int i = 0 ; i < N ; i++ ) { cin>>j[i]; }
		
		for( int i = 1 ; i < N ; i++ ) {
			if( j[i] - j[i-1] > 0 ) { h_j++; }
			else if( j[i] - j[i-1] < 0 ) { l_j++; }	
		}
		
		cout<<"Case "<<k++<<": "<<h_j<<" "<<l_j<<endl;
	}
    
	return 0;
}
