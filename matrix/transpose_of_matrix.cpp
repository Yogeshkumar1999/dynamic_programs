
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function which converts A[][] to its transpose
*   n: size of matrix
*   N: globally defined for matrix
*   A: input matrix
*/
void transpose( int A[][N],int n) 
{ 
    int temp;
	for(int i = 0; i < n; i++){
	    for(int j = i; j < n; j++){
	        temp = A[i][j];
	        A[i][j] = A[j][i];
	        A[j][i] = temp;
	        
	    }
	}
	
	
}