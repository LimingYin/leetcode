#include "solution.hpp"

vector<string> Solution::letterCombinations(string digits)
{
    if(digits == "")
        return {};
    vector<int> nums;
    int len = 1;
    for(const char s : digits)
    {
        nums.push_back(s - '0');
        if(s -'0' == 7 || s - '0' == 9)
            len *= 4;
        else
            len *= 3;
    }
    vector<string> combs(len, "");
    int group = 1;
    for(const int num : nums)
    {
        int subgroup = 3;
        int addi = 0;

        if(num == 7 || num == 9)
            subgroup = 4;
        if(num > 7)
            addi = 1;

        for(int i = 0; i < group; ++i)
            for(int j = 0; j < subgroup; ++j)
                for(int k = 0; k < len/group/subgroup; ++k)
                    combs[i*len/group + j*len/group/subgroup + k] += (((num-2)*3 + addi + j) + 'a');

        group *= subgroup;
    }
    return combs;
}