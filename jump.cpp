#include "solution.hpp"

int Solution::jump(vector<int> &nums)
{
    int ret = 0;
    int currJ = 0;
    int maxJ = 0;
    for(int i = 0; i < nums.size(); ++i)
    {
        if(currJ < i)
        {
            ++ret;
            currJ = maxJ;
        }
        maxJ = max(maxJ, i+nums[i]);
    }

    return ret;
}