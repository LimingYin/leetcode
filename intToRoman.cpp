#include "solution.hpp"

string Solution::intToRoman(int num)
{
    string roman;
    int digit[4];
    for(int i = 0; i < 4; ++i)
    {
        digit[i] = num / int(pow(10, 3-i));
        num = num % int(pow(10, 3-i));
    }

    for(int i = digit[0]; i > 0; --i)
        roman += "M";
    
    // 0
    if(digit[1] == 9)
        roman += "CM";
    else if(digit[1] > 4)
    {
        roman += "D";
        for(int i = digit[1] - 5; i > 0; --i)
            roman += "C";
    }
    else if(digit[1] == 4)
        roman += "CD";
    else
        for(int i = digit[1]; i > 0; --i)
            roman += "C";

    // 1
    if(digit[2] == 9)
        roman += "XC";
    else if(digit[2] > 4)
    {
        roman += "L";
        for(int i = digit[2] - 5; i > 0; --i)
            roman += "X";
    }
    else if(digit[2] == 4)
        roman += "XL";
    else
        for(int i = digit[2]; i > 0; --i)
            roman += "X";

    // 2
    if(digit[3] == 9)
        roman += "IX";
    else if(digit[3] > 4)
    {
        roman += "V";
        for(int i = digit[3] - 5; i > 0; --i)
            roman += "I";
    }
    else if(digit[3] == 4)
        roman += "IV";
    else
        for(int i = digit[3]; i > 0; --i)
            roman += "I";

    return roman;
}