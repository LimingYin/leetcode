#include "solution.hpp"

vector<vector<int>> Solution::threeSum(vector<int>& nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end()); // sort

    for(auto it = nums.cbegin(); it != nums.cend(); ++it)
    {
        if(*it > 0) // fix > 0, stop 
            break;

        if(it != nums.cbegin() && *it == *(it - 1)) // skip same fix
            continue;

        int target = 0 - *it;
        auto head = it + 1, tail = nums.cend()-1;
        
        while(head < tail)
        {
            if(*head + *tail == target) // found
            {
                res.push_back({*it, *head, *tail});
                while(head < tail && *head == *(head + 1)) // skip same head
                    ++head;
                while(head < tail && *tail == *(tail - 1)) // skip same tail
                    --tail;
                ++head;
                --tail;
            }
            else if(*head + *tail > target)
                --tail;
            else
                ++head;
        }
    }

    return res;
}