#include <bits/stdc++.h>
using namespace std;

int main(){
	int N; cin>>N;
	int length;
	
	cout<<"Lumberjacks:"<<endl;
		
	while( N-- ) {
		vector<int> v;
		
		for( int i = 1 ; i <= 10 ; i++ ) {
			cin>>length;
			v.push_back( length );
		}
		
		vector<int> v_cmp (v);
		sort( v_cmp.begin(), v_cmp.end() );
		
		vector<int> v_cmp1 (v_cmp);
		reverse( v_cmp1.begin(), v_cmp1.end() );
		
		if( v == v_cmp ) { cout<<"Ordered"<<endl; }
		else if( v == v_cmp1 ) { cout<<"Ordered"<<endl; }
		else{ cout<<"Unordered"<<endl; }
	}
					 
    return 0;
}
