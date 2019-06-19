#include <iostream>
using namespace std;

int search(int n){
    int start = 1;
    int end = n;
    int mid;
    while(start < end){
        mid = (start + end)/2;
        
        if(mid*mid <= n && (mid + 1)*(mid + 1) >  n){
            return mid;
        }
        else if(mid*mid < n){
            start = mid +1;
            
        }
        else{
            end = mid - 1;
        }
    }
}

int main() {
	int n;
	cin>>n;
	cout<<search(n);
	return 0;
}