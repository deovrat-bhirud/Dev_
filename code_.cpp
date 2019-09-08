#include <iostream>
#include <bits/stdc++.h> 
#include <array>
using namespace std; 

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
	int Fib[n]; 
	for ( int i =0; i < n; i++ )
	{
		if ( i == 0 ) Fib[i] = 0;
		else if ( i == 1 ) Fib[i] = 1;
		else Fib[i] = Fib[i -1] + Fib[i -2];
	}

    vector<int> V(n); 
    while(V.size()!=1){
    int j=0;    
	for ( int i =0; i < V.size(); i++ )
	 {
		if ( i % 2 == 1 ){
		if ( Fib[i]>9)	V[j]=Fib[i]%10;
		else
		 V[j] = Fib[i];        
	     j++;
		}
	}
	
    }        
	cout<<V[0]<<endl;
	}
	return ( 0 );
}
