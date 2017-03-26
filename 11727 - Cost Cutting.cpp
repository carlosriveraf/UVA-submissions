#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	int i = 1;
	while( T-- ) {
		int a; cin>>a;
		int b; cin>>b;
		int c; cin>>c;
		
		cout<<"Case "<<i<<": ";
		
		if( ( b > a && a > c ) || ( c > a && a > b ) ) { cout<<a<<endl; }
		else if( ( a > b && b > c ) || ( c > b && b > a ) ) { cout<<b<<endl; }		
		else{ cout<<c<<endl; }		
		i++;		
	}
	
	return 0;
}
