#include "solution.hpp"

map<char, int> roman{{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

int Solution::romanToInt(string s)
{
    int num = 0;
    for(size_t i = 0; i < s.size(); ++i)
    {
        num += roman[s[i]];
    }

    for(size_t i = 0; i < s.size()-1; ++i)
    {
        string temp = string(1, s[i]) + string(1, s[i+1]);
        if(temp == "CM" || temp == "CD")
            num -= 200;
        if(temp == "XC" || temp == "XL")
            num -= 20;
        if(temp == "IV" || temp == "IX")
            num -= 2;
    }
    return num;
}