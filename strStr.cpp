#include "solution.hpp"

int Solution::strStr(string haystack, string needle)
{
    if(needle == "")
        return 0;

    for(size_t i = 0; i < haystack.size(); ++i)
    {
        for(size_t j = 0; j < needle.size(); ++j)
        {
            if(i+j >= haystack.size())
                return -1;

            if(haystack[i+j] != needle[j])
                break;

            if(j == needle.size()-1)
                return i;
        }
    }
    return -1;
}