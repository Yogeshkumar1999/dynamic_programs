/*  Function to print boundary traversal of the matrix
*   n1, m1: rows and cols of matrix
*   arr[][]: input matrix
*/
void boundaryTraversal(int n1, int m1, int arr[SIZE][SIZE]){
    
    // Your code here
    int i = 0, j = 0;
    for(j = 0; j < m1; j++){
        cout<<arr[i][j]<<" ";
    }
    i++;
    j--;
    for(int k = i; k < n1; k++){
        cout<<arr[k][j]<<" ";
    }
    j--;
    if(i != n1){
    for(int k = j; k >=0; k--){
        cout<<arr[n1-1][k]<<" ";
    }
    for(int k = n1-2; k >=i; k--){
        cout<<arr[k][0]<<" ";
    }
    }
    return;
    
}
