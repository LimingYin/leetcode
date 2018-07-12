#include "solution.hpp"

vector<vector<int>> Solution::fourSum(vector<int>& nums, int target)
{
    sort(nums.begin(), nums.end());

    vector<vector<int>> combs;

    for(auto i = nums.cbegin(); i < nums.cend(); ++i)
    {
        if(i != nums.cbegin() && *i == *(i-1))
            continue;
        if(*i > target && i+1 < nums.cend() && *(i+1) > 0)
            break;

        for(auto j = i+1; j < nums.cend(); ++j)
        {
            if(j != i+1 && *j == *(j-1))
                continue;
            if(*i + *j > target && j+1 < nums.cend() && *(j+1) > 0)
                break;

            for(auto k = j+1; k < nums.cend(); ++k)
            {
                if(k != j+1 && *k == *(k-1))
                    continue;
                if(*i +*j + *k > target && k+1 < nums.cend() && *(k+1) > 0)
                    break;

                for(auto l = k+1; l < nums.cend(); ++l)
                {
                    if(l != k+1 && *l == *(l-1))
                        continue;

                    if(*i +*j + *k + *l > target && l+1 < nums.cend() && *(l+1) > 0)
                        break;
                    if(*i+*j+*k+*l == target)
                        combs.push_back({*i, *j, *k, *l});
                }
            }

        }
    }

    return combs;
}