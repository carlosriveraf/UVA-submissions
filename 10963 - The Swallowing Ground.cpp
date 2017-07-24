#include <bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	int W;
	while( cases-- ) {
		cin >> W;
		int y1, y2;
		set<int> s;
		while( W-- ) {
			cin >> y1 >> y2;
			s.insert( y1 - y2 );
		}
		if( s.size() == 1 ) {
			cout << "yes\n";

		}
		else{
			cout << "no\n";

		}
		if( cases ) cout << endl;
	}
	
	return 0;
}
