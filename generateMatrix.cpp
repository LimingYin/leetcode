#include "solution.hpp"

vector<vector<int>> Solution::generateMatrix(int n)
{
    vector<vector<int>> res(n, vector<int>(n, 1));
    int val = 0;

    for(size_t i = 0; i < (n+1)/2; ++i)
    {
        for(size_t c = i; c < n-1-i; ++c)
            res[i][c] = ++val;

        for(size_t r = i; r < n-1-i; ++r)
            res[r][n-1-i] = ++val;

        for(size_t c = n-1-i; c > i; --c)
            res[n-1-i][c] = ++val;

        for(size_t r = n-1-i; r > i; --r)
            res[r][i] = ++val;
    }

    if(n%2 != 0)
        res[n/2][n/2] = ++val;

    return res;
}