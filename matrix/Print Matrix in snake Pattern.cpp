void print(int mat[][100],int n)
{
    int i = 0, j = 0;
    while(i < n){
    for(j = 0; j < n; j++){
        cout<<mat[i][j]<<" ";
        
    }
    i++;
    j--;
    if(i < n){
    for(int k = j; k >=0; k--){
        cout<<mat[i][k]<<" ";
    }
    i++;
    }
    }
    return;
}