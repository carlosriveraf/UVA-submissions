#include <bits/stdc++.h>
using namespace std;

int main() {
	float H, U, D, F;
	while( cin >> H >> U >> D >> F ) {
		if( H == 0 ) return 0;
		float height_after_climbing = 0;
		float height_after_sliding = 0;
		float desgaste = F * U / 100.0;
		int day = 0;
		while(1) {
			height_after_climbing = height_after_sliding + U;
			height_after_sliding = height_after_climbing - D;			
			day++;
			U -= desgaste;		
			if( height_after_climbing > H ) {
				cout << "success on day " << day << endl; break;
			}
			else if( height_after_climbing < 0 || height_after_sliding < 0 ) {
				cout << "failure on day " << day << endl; break;
			}
			else if( U <= 0.0 ) {
				while(1) {
					height_after_sliding -= D;
					day++;
					if( height_after_sliding < 0 ) {
						cout << "failure on day " << day << endl; break;
					}
				}
				break;					
			}
		}
	}
	return 0;
}
