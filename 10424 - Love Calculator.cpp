#include <bits/stdc++.h>
using namespace std;

int suma_cifras( int x ) {
	int suma = 0;
	while( x!=0 ){
		suma += x % 10;
		x/=10;
	}
	return suma;
}

int main(){
	char name1[30];
	char name2[30];
	
	while( cin.getline( name1 , 30 , '\n' ) ) {	
		cin.getline( name2 , 30 , '\n' );
		
		int size_1 = strlen( name1 );
		int size_2 = strlen( name2 );
		
		int value1 = 0, value2 = 0;
		
		for( int i = 0 ; i < size_1 ; i++ ) {
			if( name1[i] >= 'a' && name1[i] <= 'z' ) {
				value1 += name1[i] - 'a' + 1;
			}
			else if( name1[i] >= 'A' && name1[i] <= 'Z' ) {
				value1 += name1[i] - 'A' + 1;
			}				
		}

		for( int i = 0 ; i < size_2 ; i++ ) {
			if( name2[i] >= 'a' && name2[i] <= 'z' ) {
				value2 += name2[i] - 'a' + 1;
			}
			else if( name2[i] >= 'A' && name2[i] <= 'Z' ) {
				value2 += name2[i] - 'A' + 1;
			}				
		}
		
		while( value1>9 ) { value1 = suma_cifras(value1); }
		while( value2>9 ) { value2 = suma_cifras( value2 ); }
		
		float ans = 0;
		
		if( size_1 == 0 && size_2 == 0 ) { printf( "\n" ); }
		else{
			if( value1 == 0 && value2 == 0 ) { printf( "%.2f %\n" , ans ); }
			else if( value1 == 0 && value2 > 0 ) { printf( "%.2f %\n" , ans ); }
			else if( value2 == 0 && value1 > 0 ) { printf( "%.2f %\n" , ans ); }
			else if( value1 == value2 && value1 > 0 ) {
				ans = 100;
				printf( "%.2f %\n" , ans );
			}
			else if( value1 > 0 && value2 > value1 ) {
				ans = float( value1 ) / float( value2 ) * 100.00;
				printf( "%.2f %\n" , ans );
			}
			else if( value2 > 0 && value1 > value2 ) {
				ans = float( value2 ) / float( value1 ) * 100.00;
				printf( "%.2f %\n" , ans );
			}				
		}	
	}
 
    return 0;
}
