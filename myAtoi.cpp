#include "solution.hpp"

int Solution::myAtoi(string str)
{
    vector<int> v_num;
    int i = 0;
    while(str[i] == ' ' && i < str.size())
        i++;
    if(i >= str.size())
        return 0;
    
    bool neg = false;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        neg = true;
        i++;
    }    
    if(i >= str.size())
        return 0;

    while(str[i] > 47 && str[i] < 58 && i < str.size())
        v_num.push_back(str[i++]-48);

    if(v_num.size() == 0)
        return 0;

    int num = 0;
    for(int v = 0; v< v_num.size(); v++)
    {
        int temp = num;
        num = num*10;
        if(num/10 != temp) // overflow
            return 0;

        temp = num;
        num += v_num[v];
        if((num ^ temp) < 0 && (num ^ v_num[v]) < 0)
            return 0;
    }
    if(neg)
        num = -num;

    return num;
}