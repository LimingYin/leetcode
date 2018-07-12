#include "solution.hpp"

void permuteAll1(vector<int>& nums, vector<vector<int>> &res, int m)
{
    if(m == nums.size())
        return;

    permuteAll1(nums, res, m+1);

    for(int i = m + 1; i < nums.size(); ++i)
    {
        bool sameFlag = false;
        int j = i-1;
        while(j >= m)
            if(nums[j--] == nums[i])
                sameFlag = true;
        if(sameFlag)
            continue;

        int temp = nums[m];
        nums[m] = nums[i];
        nums[i] = temp;
        res.push_back(nums);

        permuteAll1(nums, res, m+1);

        temp = nums[m];
        nums[m] = nums[i];
        nums[i] = temp;
    }

    return;
}

vector<vector<int>> Solution::permuteUnique(vector<int> &nums)
{
    vector<vector<int>> res;
    res.push_back(nums);
    permuteAll1(nums, res, 0);

    return res;
}