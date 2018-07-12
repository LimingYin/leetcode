#include "solution.hpp"

int Solution::threeSumClosest(vector<int>& nums, int target)
{
    int targetClosest = 0;
    unsigned int diff = 0xFFFFFFFF;

    sort(nums.begin(), nums.end());

    for(auto fix = nums.cbegin(); fix < nums.cend(); ++fix)
    {
        int tempTarget = target - *fix;
        auto head = fix + 1, tail = nums.cend() - 1; // two pointer

        while(head < tail)
        {
            int diffTemp = tempTarget - *head - *tail; 

            if(abs(diffTemp) < diff) // more closer
            {
                diff = abs(diffTemp);
                targetClosest = *fix + *head + *tail;
            }
            if(diffTemp > 0)
                ++head;
            else
                --tail;
            if(diff == 0)
                break;
        }
    }

    return targetClosest;
}