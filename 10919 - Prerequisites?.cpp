#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, m;
	
	while(cin >> k){
		if(k == 0) return 0;
		cin >> m;
		vector<string> cursosElegidos;
		
		for(int i = 0; i < k; i++){
			string codigo;
			cin >> codigo;
			cursosElegidos.push_back(codigo);
		}
		
		int verificador = 0;
		
		for(int i = 0; i < m; i++) {
			int c, r;
			cin >> c >> r;
			
			int subVerificador = 0;
			
			while(c--){
				string codigo;
				cin >> codigo;
				for(int j = 0; j < cursosElegidos.size(); j++){
					if(cursosElegidos[j] == codigo) {
						subVerificador++;	
					}
				}
			}
						
			if(subVerificador >= r) {
				verificador++;
			}
		}
		
		if(verificador >= m) {
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
		
	}
	
	return 0;
}
