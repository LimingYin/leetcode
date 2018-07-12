#include "solution.hpp" 

int Solution::climbStairs(int n)
{
    int a = 1, b = 1;
    while(n--)
    {
        b += a;
        a = b-a;
    }

    return a;
}