#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	while(cin>>n){
		int numbers[n];
		set<int> jolly;
		int x;
		
		for(int i=0;i<n;i++){cin>>numbers[i];}
		
		for(int i=1;i<n;i++){
			x=abs(numbers[i-1]-numbers[i]);
			if(x>0&&x<n){jolly.insert(x);}
		}
			
		if(jolly.size()==n-1){cout<<"Jolly"<<endl;}
		else{cout<<"Not jolly"<<endl;}	
	}
		
	return 0;
}
