class Solution {
public:
    int minpath(vector<vector<int>>& grid,
                int row,
                int col,
                vector<vector<int>>& dp)
    {
        int m = grid.size();
        int n = grid[0].size();
        if(row == m-1 && col == n-1)
            return grid[row][col];
        if(dp[row][col] != -1)
            return dp[row][col];
        if(row == m-1)
            return dp[row][col] =
                grid[row][col] + minpath(grid,row,col+1,dp);
        if(col == n-1)
            return dp[row][col] =
                grid[row][col] + minpath(grid,row+1,col,dp);
        return dp[row][col] =
            grid[row][col] +
            min(minpath(grid,row+1,col,dp),
                minpath(grid,row,col+1,dp));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return minpath(grid,0,0,dp);
    }
};