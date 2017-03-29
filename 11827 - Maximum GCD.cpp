#include <bits/stdc++.h>
using namespace std;

int GCD( int a, int b ) {
	if( b == 0 ) return a;
	return GCD( b, a % b );
}

int main(){
	int N; cin>>N; 
	getc(stdin);
	
	while( N-- ) {
		string s; 
		getline( cin, s );
		stringstream ss(s);
		
		vector<int> v( 100, 0 );
		int size = 0;
		
		while( ss>>v[size] ) {
			size++;
		}	
		
		int ans = 0;
		
		for( int i = 0 ; i < size ; i++ ) {
			for( int j = i + 1  ; j < size ; j++ ) {
				ans = max( ans, GCD( v[i], v[j] ) );
			}
		}
		
		printf( "%d\n", ans );
	}
	
    return 0;
}
