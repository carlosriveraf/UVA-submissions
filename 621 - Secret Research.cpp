#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; scanf( "%d" , &N );
	
	string s;
	
	while( N-- ){
		cin>>s;
		
		int n = s.size();
		
		if( s == "1" || s == "4" || s == "78" ) { printf( "+\n" ); }
		else if( s[ n - 2 ] == '3' && s[ n - 1 ] == '5' ) { printf( "-\n" ); }
		else if( s[0] == '9' && s[ n - 1 ] == '4' ) { printf( "*\n" ); }
		else if( s[0] == '1' && s[1] == '9' && s[2] == '0' ) { printf( "?\n" ); }
	}
	
    return 0;
}
