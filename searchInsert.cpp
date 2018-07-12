#include "solution.hpp"

int Solution::searchInsert(vector<int> &nums, int target)
{
    if(nums.empty())
        return 0;

    int head = 0, tail = nums.size();
    while(head < tail)
    {
        int mid = head + (tail-head) / 2;
        if(nums[mid] == target)
            return mid;

        if(nums[mid] > target)
            tail = mid;
        else
            head = mid + 1;
    }

    return head;
}