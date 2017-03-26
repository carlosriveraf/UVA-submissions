#include <bits/stdc++.h>
using namespace std;

int main () {	
	int I, J;
	
	while(cin >> I >> J) {
		int n = 0;
		int max = 0;
		int aux_i = I;
		int aux_j = J;
		int aux;
		
		if(I > J) { aux=I ; I=J ; J=aux ; }
		
		for( I ; I<=J ; I++ ) {
			int count = 1;
			n = I;
			
			while( n!=1 ) {
				if( n%2 == 0 ) { n/=2; count++; }
				else{ n=3*n+1; count++; }
			}
			
			if( count > max ) { max = count; }			
		}
		
		cout << aux_i <<" "<< aux_j <<" "<< max << endl;	
	}
		
	return 0;
}
