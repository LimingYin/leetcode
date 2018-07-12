#include "solution.hpp"

int Solution::divide(int dividend, int divisor)
{
    int n = 0;
    if(dividend == 0x80000000)
    {
        if(divisor == -1)
            return 0x7fffffff;
        if(divisor == 0x80000000)
            return 1;
        n = 1;
        dividend += abs(divisor);
    }
    if(divisor == 0x80000000)
        return 0;

    bool negFlag = false;
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        negFlag = true;
    int b = abs(divisor), a = abs(dividend);

    while(a >= b)
    {
        int sum = b;
        int count = 1;
        while(sum > 0 && a - sum >= 0)
        {
            a -= sum;
            n += count;
            sum <<= 1;
            count <<= 1;
        }
    }

    if(negFlag)
        return -n;
    else
        return n;
}