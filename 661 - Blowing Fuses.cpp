#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, c, max, cant, ii = 1, blown;

	while(cin >> n && cin >> m && cin >> c){
		if(n == 0 && m == 0 && c== 0){
			return 0;
		}
		max = 0;
		cant = 0;
		int consumo[n+1];
		int estado[n+1];
		
		for(int i = 1; i <= n; i++){
			cin >> consumo[i];
			estado[i] = 0;
		}
		
		int aux;
		blown = 0;
		
		while(m--){
			cin >> aux;
			if( estado[aux] == 0 ) {
				estado[aux] = 1;
				cant += consumo[aux];
				if(cant > max){
					max = cant;
				}
				if(cant > c){
					blown = 1;
				}
			}
			else{
				estado[aux] = 0;
				cant -= consumo[aux];
			}
		}
		cout << "Sequence " << ii++ << endl;
		if(blown == 1){
			cout << "Fuse was blown.\n\n";
		}
		else{
			cout << "Fuse was not blown." << endl << "Maximal power consumption was " << max << " amperes.\n\n";
		}	
	}
	
	return 0;
}
