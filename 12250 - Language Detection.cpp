#include <bits/stdc++.h>
using namespace std;

int main(){
	char word[100];
	int i = 1;
	while( cin>>word ) {
		
		if( strcmp( word, "#" ) == 0 ) { return 0; }	
			
		cout<<"Case "<<i<<": ";
		
		if( strcmp( word, "HELLO" ) == 0 ) { cout<<"ENGLISH"<<endl; }
		else if( strcmp( word, "HOLA" ) == 0 ) { cout<<"SPANISH"<<endl; }
		else if( strcmp( word, "HALLO" ) == 0 ) { cout<<"GERMAN"<<endl; }
		else if( strcmp( word, "BONJOUR" ) == 0 ) { cout<<"FRENCH"<<endl; }
		else if( strcmp( word, "CIAO" ) == 0 ) { cout<<"ITALIAN"<<endl; }
		else if( strcmp( word, "ZDRAVSTVUJTE" ) == 0 ) { cout<<"RUSSIAN"<<endl; }
		else{ cout<<"UNKNOWN"<<endl; }

		i++;
	}
	
	return 0;
}
