#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v = {7, 1, 2, 3, 4};
    int start = 0;
    int end = v.size() - 1;
    int mid;
    int max = v[0];
    while(start <= end){
        int mid = (start + end) /2;
        if(v[mid] >= max){
            max = v[mid];
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
    }
    cout<<max;
	return 0;
}
