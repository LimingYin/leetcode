#include "solution.hpp"

string Solution::minWindow(string &source, string &target)
{
    /**
     * @param source: A string
     * @param target: A string
     * @return: A string denote the minimum window
     *          Return "" if there is no such a string
     */

    size_t sLength = source.length();
    size_t tLength = target.length();
    size_t found = 0;
    size_t start = 0;
    size_t beg = 0, end = 0;
    size_t minLen = source.length() + 1;
    map<char, size_t> sRecord, tRecord;
    for(auto c : target)
        ++tRecord[c];
    
    for(size_t i = 0; i < sLength; ++i)
    {
        if(++sRecord[source[i]] <= tRecord[source[i]])
            ++found;

        if(found == tLength)
        {
            // remove redundent
            while(start < i && sRecord[source[start]] > tRecord[source[start]])
            {
                --sRecord[source[start]];
                ++start;
            }

            if(i - start + 1 < minLen)
            {
                minLen = i - start + 1;
                beg = start;
                end = i;
            }

            --sRecord[source[start]];
            ++start;
            --found;
        }
    }

    if(minLen == source.length()+1)
        return "";
    else
        return source.substr(beg, end-beg+1);
}