
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*  Function to rotate matrix by 90 degrees
*   n: input for matrix size
*   N: size defined globally
*/
void rotate(ll n, ll a[][N]){
    ll A[n][n];
    ll k = 0,  m = 0;
    for(ll i = n-1; i >= 0; i--){
        m = 0;
        for(ll j = 0; j < n; j++){
            A[k][m] = a[j][i];
            m++;
        }
        k++;
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            a[i][j] = A[i][j];
        }
    }
}