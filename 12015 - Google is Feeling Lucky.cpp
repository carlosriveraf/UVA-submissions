#include <bits/stdc++.h>
using namespace std;

#define Node pair< string , int >

struct cmp {
	bool operator() ( const Node &a , const Node &b ) {
		return a.second < b.second;
	}
};

int main(){
	int T; cin>>T;
	int num_case = 1;
	while( T-- ) {
		priority_queue< Node , vector<Node> , cmp > Q;
		string url; int priority;
		vector<string> ans;
		
		for( int i = 1 ; i <= 10 ; i++ ) {
			cin>>url; cin>>priority;
			Q.push( Node( url , priority ) );
		}
		
		int v = Q.top().second;
		
		for( int i = 1 ; i <= 10 ; i++ ) {
			if( Q.top().second == v ) {
				ans.push_back( Q.top().first );
				Q.pop();
			}
		}
		
		cout<<"Case #"<<num_case++<<":"<<endl;
		for( int i = 0 ; i < ans.size() ; i++ ) { cout<<ans[i]<<endl; }
	}
				 
    return 0;
}
