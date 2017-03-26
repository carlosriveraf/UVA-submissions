#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull GCD( ull a, ull b ) {
     if( b == 0 ) return a;
     return GCD ( b, a % b );
}

int main(){
	int N;
	while( cin>>N ) {
		int i, j;
		int G = 0;
		if( N == 0 ) { return 0; }
		else{
			for( i = 1 ; i < N ; i++ ) {
				for( j = i + 1 ; j <= N ; j++ ) { G += GCD( i, j ); }
			}
			cout<<G<<endl;
		}	
	}
	
	return 0;
}
