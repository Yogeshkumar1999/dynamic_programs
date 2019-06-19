//bubble sort

#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int>&v, int j){
    for(int i = 0; i <=j;i++){
        if(v[i] > v[j]){
            swap(v[i], v[j]);
        }
    }
}
int main() {
	vector<int> v = {1,8, 3, 6, 9};
	for(int j = v.size()-1; j >= 0; j--)
	bubble(v, j);
	for(int i = 0; i < v.size();i++){
	    cout<<v[i];
	}
	return 0;
}