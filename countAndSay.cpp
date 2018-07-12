#include "solution.hpp"

string say(string s)
{
    if(s.empty())
        return "";

    int i = 1;
    char c = s[0];
    while(i < s.size() && s[i] == c)
        ++i;
    if(i < s.size())
        return to_string(i) + c + say(s.substr(i));
    else
        return to_string(i) + c;
}
string Solution::countAndSay(int n)
{
    string s = "1";
    while(--n > 0)
        s = say(s);

    return s;
}