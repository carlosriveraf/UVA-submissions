#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int i = 1;
	while( cin>>s ) {
		if( s == "*" ) { return 0; }
		
		cout<<"Case "<<i<<": ";	
			
		if( s == "Hajj" ) { cout<<"Hajj-e-Akbar"<<endl; }
		else if( s == "Umrah" ) { cout<<"Hajj-e-Asghar"<<endl; }
		i++;
	}
	
	return 0;
}
