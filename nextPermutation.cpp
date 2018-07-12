#include "solution.hpp"

void Solution::nextPermutation(vector<int>& nums)
{
    if(nums.size() == 0 || nums.size() == 1)
        return;

    size_t i = nums.size()-2; // first decend
    for(; i >= 0; --i)
        if(nums[i] < nums[i+1])
            break;
    if(i < 0) // reverse whole sequence
    {
        for(size_t i = 0, j = nums.size()-1; i < j; ++i, --j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        return;
    }

    for(size_t j = i+1; j < nums.size(); ++j)
    {
        if(j+1 == nums.size() || (nums[j] > nums[i] && nums[j+1] <= nums[i]))
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            break;
        }
    }

    for(size_t j = nums.size()-1; i+1 < j; ++i, --j)
        {
            int temp = nums[i+1];
            nums[i+1] = nums[j];
            nums[j] = temp;
        }
}