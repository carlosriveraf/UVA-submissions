#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int T = 1;
	
	while(cin >> n) {
		
		string people[n];
		int peopleRegalo[n];
		
		string s;
		getc(stdin);
		getline(cin, s);
		stringstream lista(s);
		
		for(int i = 0; i < n; i++){
			lista >> people[i];
			peopleRegalo[i] = 0;
		}
		
		for(int i = 0; i < n; i++){
			
			string line;
			getline(cin, line);
			stringstream ss(line);
			string persona;
			
			int dineroTotal;
			int cantidadAmigos;
			
			ss >> persona >> dineroTotal >> cantidadAmigos;
			
			if(cantidadAmigos == 0) {
				continue;
			}
			
			for(int j = 0; j < n; j++){
				if(people[j] == persona){
					peopleRegalo[j] -= (dineroTotal - (dineroTotal % cantidadAmigos) );
				}
			}
			
			for(int j = 0; j < cantidadAmigos; j++) {
				string amigo;
				ss >> amigo;
				for(int k = 0; k < n; k++){
					if(people[k] == amigo){
						peopleRegalo[k] += dineroTotal / cantidadAmigos;
					}
				}
			}
		}
		
		if(T != 1){
			cout << endl;
		}
		else{
			T++;
		}
		
		for(int i = 0; i < n; i++){
			cout << people[i] << " " << peopleRegalo[i] << endl;
		}
		
	}
	
	return 0;
}
