#include "solution.hpp"

string Solution::multiply(string num1, string num2)
{
    string res;
    int carry = 0;
    vector<int> tempMul(num1.size() + num2.size(), 0);

    for(size_t i = 0; i < num1.size(); ++i)
        for(size_t j = 0; j < num2.size(); ++j)
            tempMul[num1.size() + num2.size() - 2 - i - j] += (num1[i] - '0') * (num2[j] - '0');

    for(size_t i = 0; i < num1.size() + num2.size(); ++i)
    {
        tempMul[i] += carry;
        carry = tempMul[i] / 10;
        tempMul[i] %= 10;
    }
    int i = num1.size() + num2.size() - 1;
    while(i >= 0 && tempMul[i] == 0)
        --i;
    if(i < 0)
        return 0;

    while(i >= 0)
        res.push_back(tempMul[i--] + '0');

    return res;
}