#include "solution.hpp"

vector<int> plusOne(vector<int> &digits)
{
    size_t len = digits.size();
    bool carry = true;

    for(int i = len-1; i >= 0 && carry; --i)
    {
        if(digits[i] == 9)
        {
            carry = true;
            digits[i] = 0;
        }
        else
        {
            carry = false;
            digits[i] += 1;  
        }
    }

    if(carry)
        digits.insert(digits.begin(), 1);

    return digits;
}