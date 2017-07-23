#include <bits/stdc++.h>
using namespace std;

int main() {
	int T; cin >> T;
	int n;
	while( T-- ) {
		cin >> n; getc(stdin);
		vector<string> v(n+1);
		string instruction;
		string s1, s2;
		int ans = 0;
		for( int i = 1 ; i <= n ; i++ ) {
			getline( cin, instruction );
			stringstream ss(instruction);
			int ii = 0;
			ss >> s1 >> s2 >> ii;
			if( s1 == "LEFT" ) {
				ans--;
				v[i] = "LEFT";
			}
			else if( s1 == "RIGHT" ) {
				ans++;
				v[i] = "RIGHT";
			}
			else{
				if( v[ii] == "LEFT" ) {
					ans--;
					v[i] = "LEFT";
				}
				else{
					ans++;
					v[i] = "RIGHT";
				}
			}
		}
		cout << ans << endl;
	}
		
	return 0;
}
