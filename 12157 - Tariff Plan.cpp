#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; cin>>T;
	int j = 1;
	
	while( T-- ) {
		int N; cin>>N;
		int p;
		int Mile = 0, Juice = 0;
		
		for( int i = 1 ; i <= N ; i++ ) {
			cin>>p;
			Mile += ( ( p / 30 ) + 1 ) * 10;
			Juice += ( ( p / 60 ) + 1 ) * 15;
		}
		
		if( Mile > Juice ) { cout<<"Case "<<j++<<": Juice "<<Juice<<endl; }
		else if( Mile < Juice ) { cout<<"Case "<<j++<<": Mile "<<Mile<<endl; }
		else{ cout<<"Case "<<j++<<": Mile Juice "<<Mile<<endl; }
	}
	
	return 0;
}
