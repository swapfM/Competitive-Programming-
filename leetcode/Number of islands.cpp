class Solution {
    
    void dfs(vector<vector<char>>& grid, int r, int c, int i, int j)
    {
        if(i>=r || i<0 || j>=c || j<0 || grid[i][j]!='1') return;
        
        
            grid[i][j]='0';
            dfs(grid,r,c,i,j-1);
            dfs(grid,r,c,i,j+1);
            dfs(grid,r,c,i-1,j);
            dfs(grid,r,c,i+1,j);
        
        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int r=grid.size(),c=grid[0].size(),ans=0;
        
     
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,r,c,i,j);
                    ans++;
                }
            }
        }
        
        return ans;
        
    }
};
