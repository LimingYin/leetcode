#include "solution.hpp"

int Solution::uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    
    vector<int> dp(n, 0);
    for(size_t i = 0; i < n; ++i)
        if(obstacleGrid[0][i] == 1)
            break;
        else
            dp[i] = 1;

    for(size_t i = 1; i < m; ++i)
    {
        if(obstacleGrid[i][0] == 1)
            dp[0] = 0;
        for(size_t j = 1; j < n; ++j)
            if(obstacleGrid[i][j] == 1)
                dp[j] = 0;
            else
                dp[j] += dp[j-1];
    }
    return dp[n-1];
}