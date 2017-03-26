#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int aux;
	
	while( cin>>n ) {
		queue<int> deck;
		
		if( n != 0 ) {
			for( int i = 1 ; i <=n ; i++ ) { deck.push(i); }
			
			cout<<"Discarded cards:";
			
			while( deck.size() > 1 ) {
				cout<<" "<<deck.front();
				deck.pop();
				aux = deck.front();
				deck.pop();
				if( !deck.empty() ) { cout<<","; }
				deck.push(aux);				
			}
			
			cout<<"\nRemaining card: "<<deck.front()<<endl;
			deck.pop();	
		}
		else{ return 0; }	
	}
		
	return 0;
}
