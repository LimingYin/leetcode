#include "solution.hpp"

void permuteAll(vector<int>& nums, vector<vector<int>> &res, int m)
{
    if(m == nums.size())
        return;

    permuteAll(nums, res, m+1);

    for(int i = m + 1; i < nums.size(); ++i)
    {
        int temp = nums[m];
        nums[m] = nums[i];
        nums[i] = temp;
        res.push_back(nums);

        permuteAll(nums, res, m+1);

        temp = nums[m];
        nums[m] = nums[i];
        nums[i] = temp;
    }

    return;
}

vector<vector<int>> Solution::permute(vector<int>& nums)
{
    vector<vector<int>> res;
    res.push_back(nums);
    permuteAll(nums, res, 0);

    return res;
}