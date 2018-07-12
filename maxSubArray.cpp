#include "solution.hpp"

int Solution::maxSubArray(vector<int> &nums)
{
    int tempSum = 0, maxSum = 0x80000000;
    for(size_t i = 0; i < nums.size(); ++i)
    {
        tempSum += nums[i];
        if(tempSum > maxSum)
            maxSum = tempSum;
        if(tempSum < 0)
            tempSum = 0;
    }
    return maxSum;
}