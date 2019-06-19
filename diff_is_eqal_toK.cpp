//diff in unsorted array after sorting it
#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v = {1, 3, 7, 8, 9};
	int i = 0;
	int j = 1;
	int n = 4;
	while(i <= j && j < v.size()){
	    if(abs(v[i] - v[j]) == n){
	        cout<<1;
	        return 0;
	    }
	    else if(abs(v[i] - v[j]) > n){
	        i++;
	    }
	     else if(abs(v[i] - v[j]) < n){
	        j++;
	    }
	    
	} 
	
	return 0;
}