#include "solution.hpp"

bool Solution::canJump(vector<int> &nums)
{
    if(nums.empty())
        return false;
    size_t maxCurr = nums[0], i = 0;
    while(++i <= maxCurr)
    {
        if(i == nums.size())
            return true;
        maxCurr = max(maxCurr, i+nums[i]);
    }

    return false;
}