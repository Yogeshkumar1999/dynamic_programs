#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    if(n == 1){
        cout<<arr[0]<<endl;
        return 0;
    }
    if(n == 2){
        cout<<arr[1]<<endl;
        return 0;
    }
    if(n ==3){
        cout<<arr[0] + arr[1] + arr[2]<<endl;
    }
    int sum = arr[0] + arr[1] + arr[1] + arr[n-1];
    for(int i = n - 3; i >= 2; i--){
        sum += arr[i] + arr[0];
    }
    sum += arr[1];
    cout<<sum;
    return 0;
	
}