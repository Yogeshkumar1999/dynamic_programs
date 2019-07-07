/*  Function to exchange columns
*   n1, m1: rows and cols of matrix
*   SIZE: defined globally for matrix
*   arr1[][]: input matrix
*/
void exchangeColumns(int n1, int m1, int arr1[SIZE][SIZE]){
    
    // Your code here
    
    for(int i = 0; i < n1; i++){
        int temp = arr1[i][0];
        arr1[i][0] = arr1[i][m1-1];
        arr1[i][m1-1] = temp;
    }
    for(int i = 0; i < n1; i++)
        for(int j = 0; j < m1; j++)
            cout<<arr1[i][j]<<" ";
    
    
}