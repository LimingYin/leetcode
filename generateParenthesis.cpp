#include "solution.hpp"

vector<string> Solution::generateParenthesis(int n)
{
    if(n == 0)
        return{""};

    vector<string> ans;
    for(int c = 0; c < n; ++c)
        for(auto strLeft : generateParenthesis(c))
            for(auto strRight : generateParenthesis(n-1-c))
                ans.push_back("("+ strLeft + ")" + strRight);

    return ans;
}