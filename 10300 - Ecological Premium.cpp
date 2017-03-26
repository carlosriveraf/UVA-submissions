#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	while( T-- ) {
		int k; cin>>k;
		int a, b, c;
		int s = 0;
		for( int i = 1 ; i <= k ; i++ ) {
			cin>>a>>b>>c;
			s += (a*c);
		}
		cout<<s<<endl;	
	}
    
	return 0;
}
