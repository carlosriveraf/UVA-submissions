#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> song(16);
	song[0] = song[4] = song[8] = song[12] = "Happy";
	song[1] = song[5] = song[9] = song[13] = "birthday";
	song[2] = song[6] = song[10] = song[14] = "to";
	song[3] = song[7] = song[15] = "you";
	song[11] = "Rujia";

	int n, replay;
	cin >> n;
	string name;
	vector<string> singers;
	for( int i = 0 ; i < n ; i++ ) {
		cin >> name;
		singers.push_back(name);
	}
	int turn1, turn2;
	if( n % 16 == 0 ) replay = n / 16;
	else replay = n / 16 + 1;
	replay *= 16;
	for( int i = 0 ; i < replay ; i++ ) {
		turn1 = i % n;
		turn2 = i % 16;
		cout << singers[turn1] << ": " << song[turn2] << endl;
	}
	
	return 0;
}
