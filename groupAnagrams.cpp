#include "solution.hpp"

vector<vector<string>> Solution::groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> anagrams;
    for(auto &val : strs)
    {
        vector<int> count(26, 0);
        for(auto c : val)
            ++count[c - 'a'];

        string key = "";
        for(auto j : count)
            key += to_string(j);

        anagrams[key].push_back(val);
    }

    vector<vector<string>> res;
    for(auto it = anagrams.cbegin(); it != anagrams.cend(); ++it)
        res.push_back(it->second);

    return res;
}