#include "solution.hpp"

vector<int> Solution::searchRange(vector<int>& nums, int target)
{
    /**
     * @param nums: integer array
     * @param target: target number to find
     * @return: start and end index of target
     */

    vector<int> targetRange(2, -1); // start and end index of target
    if(nums.empty()) // if empty, return
        return targetRange;

    auto head = nums.cbegin(), tail = nums.cend(); // start and end iterator
    while(head < tail) // binary search find leftmost index of target
    {
        auto mid = head + (tail-head) / 2; // middle iterator
        if(*mid >= target) // target in first half
            tail = mid;
        else // target in second half
            head = mid + 1;
    }
    if(head == nums.cend() || *head != target) // target not find
        return targetRange;
    targetRange[0] = head - nums.cbegin(); // leftmost index of target

    tail = nums.cend(); // reset to end
    while(head < tail) // binary search find rightmost index of target
    {
        auto mid = head + (tail-head) / 2; // middle iterator
        if(*mid > target) // target in first half
            tail = mid;
        else // target in second half
            head = mid + 1;
    }
    targetRange[1] = head - 1 - nums.cbegin(); // rightmost index of target

    return targetRange;
}