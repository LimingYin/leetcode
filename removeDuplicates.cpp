#include "solution.hpp"

int Solution::removeDuplicates(vector<int>& nums)
{
    size_t i = 0;
    for(size_t j = 0; j < nums.size(); ++j)
        if(nums[i] != nums[j])
            nums[++i] = nums[j];
    
    return i;
}