#include "solution.hpp"

bool Solution::isPalindrome(int x)
{
    // when x < 0, x is not a palindrome.
    // last digit is 0, x is not a palindrome.
    if( x < 0 || (x% 10 == 0 && x != 0))
        return false;
    
    int reverseNum = 0;
    while(x > reverseNum)
    {
        reverseNum = reverseNum * 10 + x % 10;
        x /= 10;
    }

    return x == reverseNum || x == reverseNum / 10;
}