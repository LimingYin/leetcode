#include "solution.hpp"

string Solution::longestCommonPrefix(vector<string>& strs)
{
    if(strs.size() == 0)
        return "";

    size_t i = 0;
    string prefix = strs[i++];
    while(i < strs.size() && prefix.size() > 0)
    {
        string temp = strs[i++];
        size_t len = prefix.size() < temp.size() ? prefix.size() : temp.size();
        prefix = prefix.substr(0, len);
        temp = temp.substr(0, len);
        while(prefix != temp)
        {
            prefix.pop_back();
            temp.pop_back();
            if(prefix.size() == 0 || temp.size() == 0)
                return "";
        }
    }

    return prefix;
}