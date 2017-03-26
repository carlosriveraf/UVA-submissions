#include <bits/stdc++.h>
using namespace std;

int main(){
	int T; scanf( "%i", &T );
	
	while( T-- ) {
		int n; scanf( "%i", &n );
		int price[n];
		
		for( int i = 0 ; i < n ; i++ ) { scanf("%i", &price[i]); }
		
		sort( price, price + n );
		
		int costo = 0;
		
		for( int i = n - 3 ; i >= 0 ; i -= 3 ) { costo += price[i]; } 
		
		printf( "%d\n", costo );
			
	}
	
	return 0;
}
