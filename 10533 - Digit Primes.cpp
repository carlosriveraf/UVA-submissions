#include <bits/stdc++.h>
using namespace std;

#define tam 1000005
bool prime[tam];
void criba(){
    memset (prime, true, sizeof (prime));
    prime[0] = prime[1] = false;
    
    for( int i = 4 ; i < tam ; i += 2 ) {
    	prime[i] = false;
    }
	
    for( int i = 3 ; i*i <= tam ; i+=2) {
        if( prime[i] ) {
            for( int h = 2 ; i*h <= tam ; ++h ) {
            	prime[i*h] = false;
            }
        }
    }
}

int suma(int x){
	int suma=0;
	while(x!=0){
		suma+=x%10;
		x/=10;
	}
	return suma;
}

int main(){
	int T; scanf("%d",&T);
	
	criba();
	
	vector<int> f( 1000005, 0 );
	
	for( int i = 2 ; i < 1000005 ; i++ ) {
		if( prime[i] && prime[suma(i)] ) { f[i] = f[i - 1] + 1; }
		else{ f[i] = f[i - 1]; }
	}
	
	while(T--){
		int t1, t2;
		scanf("%d %d",&t1,&t2);		
		printf( "%d\n", f[t2] - f[t1-1] );	
	}
	
	return 0;
}
