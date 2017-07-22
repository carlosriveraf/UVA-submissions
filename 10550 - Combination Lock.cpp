#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int aux = 1;
	while( getline( cin, s ) ) {
		for( int i = 0 ; i < s.size() ; i++ ) {
			if( s[i] != 34 ) {
				cout << s[i];
			}	
			else{
				if( aux == 1 ) {
					cout << "``";
					aux = 2;
				}
				else{
					cout << "\''";
					aux = 1;
				}
			}
		}
		cout << endl;			
	}
					
	return 0;
}
