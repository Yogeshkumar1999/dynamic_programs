
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function to search x in the input matrix
*   n, m: rows and columns of matrix
*   x: element to check presence in matrix
*   mat[][]: input matrix
*/
int search( int n,int m, int x, int mat[SIZE][SIZE])
{
    int num = 0;
   for(int  i = 0; i < n; i++){
       
       if(mat[i][0] <= x){
           num = i;
       }
   }
   for(int i = 0; i < m; i++){
       if(mat[num][i] == x){
           return 1;
       }
   }
   return 0;
}