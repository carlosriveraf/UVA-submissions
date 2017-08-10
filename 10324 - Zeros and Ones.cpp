#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int number = 1;
	while( cin >> s ) {
		int n; cin >> n;
		printf( "Case %d:\n", number++ );
		int x, y, i, j;
		while( n-- ) {
			cin >> x >> y;
			if( x == y ) cout << "Yes\n";
			i = min( x, y );
			j = max( x, y );
			for( i ; i < j ; i++ ) {
				if( s[i] != s[i+1] ) {
					cout << "No\n"; break;
				}
				if( i == j - 1 ) cout << "Yes\n";
			}
		}
	}
	
	return 0;
}
