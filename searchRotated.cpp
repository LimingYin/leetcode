#include "solution.hpp"

int Solution::searchRotated(vector<int>& nums, int target)
{
    /**
     * @param nums: integer array
     * @param target: target number to find
     * @return: the first position of target
     */
    
    if(nums.empty())
        return -1;

    int begin = 0, end = nums.size() - 1;

    while(begin <= end)
    {
        int mid = begin + (end - begin)/ 2;
        if(nums[mid] == target)
            return mid;

        if(nums[begin] <= nums[mid]) // begin and mid in same ascending sequence
        {
            if(target < nums[mid] && target >= nums[begin])
                end = mid - 1;
            else
                begin = mid + 1;
        }
        else // begin and mid in two ascending sequence
        {
            if(target > nums[mid] && target <= nums[end])
                begin = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}