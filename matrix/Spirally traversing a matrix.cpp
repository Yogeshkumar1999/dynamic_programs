//Complete this function
void spirallyTraverse(int m, int n, int ar[SIZE][SIZE]){
    
    int r = 0, c = 0;
    while(r < m && c < n){
        for(int i = c; i < n; i++)
        cout<<ar[r][i]<<" ";
        
        r++;
        for(int i = r; i < m; i++)
        cout<<ar[i][n-1]<<" ";
        
        n--;
        
        if(r < m){
            for(int i = n-1; i >= c; i--)
            cout<<ar[m-1][i]<<" ";
            
              m--;
        }
      
        
        if(c < n){
            for(int i = m-1; i >= r; i--)
            cout<<ar[i][c]<<" ";
            
            c++;
        }
    }
    
}
