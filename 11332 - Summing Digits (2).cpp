#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while( cin>>n ) {
		if( n == 0 ) { return 0; }
		    
		while( n > 9 ) {
			int suma = 0;
			while( n != 0 ) {
				suma += n % 10;
				n/=10;
			}
			n = suma;
		}
		cout<<n<<endl;
	}
    
	return 0;
}
