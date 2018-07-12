#include "solution.hpp"

void combination(vector<int> &candidates, int start, vector<int> &items, int target, vector<vector<int>> &res)
{
    if(target < 0)
        return;
    if(target == 0)
    {
        res.push_back(items);
        return;
    }
    
    for(int i = start; i < candidates.size(); ++i)
    {
        items.push_back(candidates[i]);
        combination(candidates, i, items, target-candidates[i], res);
        items.pop_back();
    }

    return;
}
vector<vector<int>> Solution::combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    
    vector<vector<int>> res;
    vector<int> items;

    for(int i = 0; i < candidates.size(); ++i)
    {
        items.push_back(candidates[i]);
        combination(candidates, i, items, target-candidates[i], res);
        items.pop_back();
    }

    return res;
}