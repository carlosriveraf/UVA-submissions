#include <bits/stdc++.h>
using namespace std;

int main() {	
	int L;
	string answer;
	while(cin >> L){
		answer = "+x";
		if(L == 0) return 0;
		L--;
		while(L--){
			string direction;
			cin >> direction;
			if(answer == "+x") {
				if(direction == "+y") answer = "+y";
				else if(direction == "-y") answer = "-y";
				else if(direction == "+z") answer = "+z";
				else if(direction == "-z") answer = "-z";
			}
			else if(answer == "-x"){
				if(direction == "+y") answer = "-y";
				else if(direction == "-y") answer = "+y";
				else if(direction == "+z") answer = "-z";
				else if(direction == "-z") answer = "+z";
			}
			else if(answer == "+y"){
				if(direction == "+y") answer = "-x";
				else if(direction == "-y") answer = "+x";
				else if(direction == "+z") answer = "+y";
				else if(direction == "-z") answer = "+y";
			}
			else if(answer == "-y"){
				if(direction == "+y") answer = "+x";
				else if(direction == "-y") answer = "-x";
				else if(direction == "+z") answer = "-y";
				else if(direction == "-z") answer = "-y";
			}
			else if(answer == "+z"){
				if(direction == "+y") answer = "+z";
				else if(direction == "-y") answer = "+z";
				else if(direction == "+z") answer = "-x";
				else if(direction == "-z") answer = "+x";
			}
			else if(answer == "-z"){
				if(direction == "+y") answer = "-z";
				else if(direction == "-y") answer = "-z";
				else if(direction == "+z") answer = "+x";
				else if(direction == "-z") answer = "-x";
			}
		}
		cout << answer << endl;
	}
	
	return 0;
}
