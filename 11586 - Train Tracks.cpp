#include <bits/stdc++.h>
using namespace std;

int main() {	
	int N;
	cin >> N;
	getc(stdin);
	while(N--){
		string line;
		getline(cin, line);
		int contM = 0;
		int contF = 0;
		for(int i = 0; i < line.size(); i++){
			if(line[i] == 'M') contM++;
			else if(line[i] == 'F') contF++;
		}
		if(contM == 1 && contF == 1){
			cout << "NO LOOP" << endl;
		}
		else{
			if(contM == contF) {
				cout << "LOOP" << endl;
			}
			else{
				cout << "NO LOOP" << endl;
			}	
		}
	}
	
	return 0;
}
