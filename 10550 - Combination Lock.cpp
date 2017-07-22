#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1, n2, n3, n4;
	while( cin >> n1 >> n2 >> n3 >> n4 ) {
		if( !n1 && !n2 && !n3 && !n4 ) return 0;
		int degrees = 1080;
		degrees += ( n1 > n2 ? n1 - n2 : 40 + n1 - n2 ) * 9;
		degrees += ( n3 > n2 ? n3 - n2 : 40 + n3 - n2 ) * 9;
		degrees += ( n3 > n4 ? n3 - n4 : 40 + n3 - n4 ) * 9;
		cout << degrees << endl;
	}
					
	return 0;
}
