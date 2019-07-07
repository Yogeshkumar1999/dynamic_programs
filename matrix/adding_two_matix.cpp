
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function to find sum of matrices
*   n1, m1, n2, m2: rows and columns of matrices respectively
*   arr1[][], arr2[][]: two input matrices
*/
void sumMatrix(int n1, int m1, int n2, int m2, int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]){
    
    // Your code here
    if(n1 == n2 && m1 == m2){
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            cout<<arr1[i][j] + arr2[i][j]<<" ";
        }
    }
    }
    else{
        cout<<-1;
    }
}