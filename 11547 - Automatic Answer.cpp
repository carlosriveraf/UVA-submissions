#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while( t-- ) {
		int n; cin>>n;
		int D;
		n = ( ( (n * 567 / 9) + 7492 ) * 235 / 47 ) - 498;
		D = abs( ( n / 10 ) % 10 );
		cout<<D<<endl;
	}

	return 0;
}
