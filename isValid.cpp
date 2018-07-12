#include "solution.hpp"

bool Solution::isValid(string s)
{
    vector<char> stack;
    for(char c : s)
    {
        if(c == '(' || c == '[' || c == '{')
            stack.push_back(c);
        else
        {
            if(stack.empty())
                return false;
            char last = stack.back();
            switch(c)
            {
                case ')':
                    if(last != '(') 
                        return false;
                    break;
                case ']':
                    if(last != '[')
                        return false;
                    break;
                case '}':
                    if(last != '{')
                        return false;
                    break;
            }

            stack.pop_back();
        }
    }

    if(stack.empty())
        return true;
    
    return false;
}