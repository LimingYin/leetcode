#include "solution.hpp"

int Solution::uniquePaths(int m, int n)
{
    vector<int> dp(n, 1);
    for(size_t i = 1; i < m; ++i)
        for(size_t j = 1; j < n; ++j)
            dp[j] += dp[j-1];

    return dp[n-1];
}