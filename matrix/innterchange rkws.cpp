//Complete this function
void interchangeRows(int n1, int m1, int arr1[SIZE][SIZE])
{
    //Your code here
    for(int i = 0; i < n1/2; i++){
        for(int j = 0; j < m1; j++){
            int temp = arr1[i][j];
            arr1[i][j] = arr1[n1-i-1][j];
            arr1[n1-i-1][j] = temp;
        }
    }
}
