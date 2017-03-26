#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	while( n-- ) {
		string w; cin>>w; 
		if( w.size() == 5 ) { cout<<"3"<<endl; }
		else{
			if( w[0] == 'o' && w[1] == 'n' ) { cout<<"1"<<endl; }
			else if( w[1] == 'n' && w[2] == 'e' ) { cout<<"1"<<endl; }				
			else if( w[0] == 'o' && w[2] == 'e' ) { cout<<"1"<<endl; }				
			else if( w[0] == 't' && w[1] == 'w' ) { cout<<"2"<<endl; }				
			else if( w[1] == 'w' && w[2] == 'o' ) { cout<<"2"<<endl; }				
			else if( w[0] == 't' && w[2] == 'o' ) { cout<<"2"<<endl; }					
		}
	} 

	return 0;
}
