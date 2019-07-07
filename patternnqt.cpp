#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for(int i = 0; i < n; i++){
	    for(int k = 0; k < i; k++)
	        cout<<"  ";
	    for(int j = i; j < n; j++)
	        cout<<"*";
	    cout<<endl;
	}
	
	
	for(int i = n-1; i >0; i--){
	    for(int k = i-1; k > 0; k--)
	        cout<<"  ";
	    for(int j = n; j >= i; j--)
	       cout<<"*";
	    cout<<endl;
	}
	return 0;
}