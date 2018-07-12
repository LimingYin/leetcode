#include "solution.hpp"

void combination(vector<int> &candidates, size_t start, vector<int> &items, vector<vector<int>> &res, int target)
{
    for(auto var : items)
        cout << var << endl;
    cout << endl;

    if(target < 0)
        return;
    
    if(target == 0)
    {
        res.push_back(items);
        return;
    }

    for(size_t i = start; i < candidates.size(); ++i)
    {
        items.push_back(candidates[i]);
        combination(candidates, i+1, items, res, target-candidates[i]);
        items.pop_back();
        while(i+1 < candidates.size() && candidates[i+1] == candidates[i])
            ++i;
    }

    return;
}

vector<vector<int>> Solution::combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());

    vector<int> items;
    vector<vector<int>> res;

    for(size_t i = 0; i < candidates.size(); ++i)
    {
        items.push_back(candidates[i]);
        combination(candidates, i+1, items, res, target-candidates[i]);
        items.pop_back();
        while(i+1 < candidates.size() && candidates[i+1] == candidates[i])
            ++i;
    }

    return res;
}