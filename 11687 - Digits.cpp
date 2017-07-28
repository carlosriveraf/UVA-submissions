#include <bits/stdc++.h>
using namespace std;

int quantity( int a ) {
	if( a == 0 ) return 1;
	int b = 0;
	while( a != 0 ) {
		b++;
		a /= 10;
	}
	return b;
}

int main() {
	string input;
	while( cin >> input ) {
		if( input == "END" ) return 0;
		stringstream ss(input);
		int number;
		ss >> number;
		vector<int> v( 5, 0 );
		v[0] = number;
		for( int i = 1 ; i < 5 ; i++ ) {
			v[i] = quantity(v[i-1]);
			if( v[i] == v[i-1] ) {
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}
