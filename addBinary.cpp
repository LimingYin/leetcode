#include "solution.hpp"

string Solution::addBinary(string a, string b)
{
    size_t lenA = a.size(), lenB = b.size();
    string &maxS = lenA > lenB ? a : b;
    string &minS = lenB < lenA ? b : a;
    size_t maxLen = maxS.size();
    size_t minLen = minS.size();

    vector<int> res(maxLen+1);
    int carry = 0;
    for(size_t i = 1; i < minLen+1; ++i)
    {
        int numA = maxS[maxLen - i] - '0';
        int numB = minS[minLen - i] - '0';

        int temp = numA + numB + carry;
        carry = temp / 2;
        res[i] = temp % 2; 
    }


    for(size_t i = minLen+1; i < maxLen+1; ++i)
    {
        int temp = maxS[maxLen - i] - '0' + carry;
        carry = temp / 2;
        res[i] = temp % 2;
    }
    if(carry > 0)
        res[maxLen] = 1;
    else
        res.pop_back();

    string s;
    for(int i = res.size()-1; i >= 0; --i)
        s += char(res[i] + '0');

    return s;
}