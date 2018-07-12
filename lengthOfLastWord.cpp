#include "solution.hpp"

int Solution::lengthOfLastWord(string s)
{
    int len = 0;
    for(size_t i = 0; i < s.size(); i++)
        if(s[i] != ' ')
            len++;
        else if(i != s.size()-1 && s[i+1] != ' ')
            len = 0;

    return len;
}