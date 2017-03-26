#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	while( T-- ) {
		int i; cin>>i;
		int j; cin>>j;
		
		if( i > j ) { cout<<">"<<endl; }
		else if( i < j ) { cout<<"<"<<endl; }
		else{ cout<<"="<<endl; }	
	}
	return 0;
}
