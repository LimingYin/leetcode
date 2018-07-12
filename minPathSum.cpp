#include "solution.hpp"

int Solution::minPathSum(vector<vector<int>> &grid)
{
    if(grid.empty())
        return 0;

    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> dp(m, vector<int>(n, 0));
    for(size_t i = 0; i < m; ++i)
        for(size_t j = 0; j < n; ++j)
        {
            if(i == 0 && j ==0)
                dp[i][j] = grid[0][0];
            else if(i == 0)
                dp[i][j] = grid[i][j] + grid[i][j-1];
            else if(j == 0)
                dp[i][j] = grid[i][j] + grid[i-1][j];
            else
                dp[i][j] = std::min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }

    return dp[m-1][n-1];
}