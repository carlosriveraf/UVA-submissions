#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n; getc(stdin);
	
	while(n--){
		string p; 
		getline( cin , p);
		stack<char> b;
				
		for( int i = 0 ; i < p.size() ; i++ ) {
			if( p[i] == '(' || p[i] == '[' ) { b.push(p[i]); }
			else if( p[i] == ')' ) {
				if( b.empty() || b.top() != '(' ) {
				    b.push('z');
				    break;
				}
				b.pop();
			}
			else if( p[i] == ']' ) {
				if( b.empty() || b.top() != '[') {
				    b.push('z');
				    break;
				}
				b.pop();
			}
		}
		
		if( b.empty() ) { cout<<"Yes"<<endl; }
		else{ cout<<"No"<<endl; }	
	}
	
	return 0;
}
