
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function to find sum of upper and lower triangles
*   n: row/col in matrix
*   mat[][]: input matrix
*/
void sumTriangles(int n, int mat[SIZE][SIZE]){
    int sum = 0, sum1 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            sum = sum + mat[i][j];
        }
    }
     for(int i = 0; i < n; i++){
        for(int j = i; j <n; j++){
            sum1 = sum1 + mat[i][j];
        }
    }
    cout<<sum1<<" "<<sum<<endl;
}