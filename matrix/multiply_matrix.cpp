
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function to multiply matrices
*   n1, m1, n2, m2: rows and cols of matrices
*   arr1[][], arr2[][]: input matrices
*   SIZE: defined globally
*/
void multiplyMatrix(int n1, int m1, int n2, int m2, long long arr1[SIZE][SIZE], long long arr2[SIZE][SIZE]){
    
    // Your code here
    int r[n1][m2];
    if(m1 == n2){
       for(int i = 0; i < n1; i++){
           for(int j = 0; j < m2; j++){
               r[i][j] = 0; 
               for(int k = 0; k < m1; k++){
                   r[i][j] += arr1[i][k] * arr2[k][j];
               }
           }
       } 
       for(int  i = 0; i < n1; i++){
           for(int j = 0; j < m2; j++){
               cout<<r[i][j]<<" ";
           }
       }
    }
    else{
        cout<<-1;
        
    }
    
}