//Complete this function
void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
    
    //Your  code here
    int row[r] = {0};
    int col[c] = {0};
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(a[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(row[i] == 1 || col[j] == 1){
                a[i][j] = 1;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
  