#include <bits/stdc++.h>
using namespace std;

int main(){
    int B, N;
    while( cin >> B >> N ) {
    	if( B == 0 && N == 0 ) return 0;
    	vector<int> reserve;
    	int R;
		while( B-- ) {
    		cin >> R;
    		reserve.push_back(R);
		}
		int D, C, V;
		while( N-- ) {
			cin >> D >> C >> V;
			reserve[D-1] -= V;
			reserve[C-1] += V;
		}
		int cont = 0;
		for( int i = 0 ; i < reserve.size() ; i++ ) {
			if( reserve[i] >= 0 ) cont++;
		}
		if( cont == reserve.size() ) cout << "S" << endl;
		else cout << "N" << endl;
	}

    return 0;
}
