#include "solution.hpp"

string Solution::getPermutation(int n, int k)
{
    string res;
    vector<int> fac(n+1, 1);
    for(size_t i = 2; i < n; i++)
        fac[i] = fac[i-1]*i;
    fac[0] = 2;

    vector<int> num(n);
    for(size_t i = 0; i < n; ++i)
        num[i] = i + 1;

    for(size_t i = 0; i < n; ++i)
    {
        int c = k / fac[n - i - 1];
        if(k % fac[n-i-1] == 0)
            --c;
        k = k - c * fac[n - i - 1];
        res += to_string(num[c]);
        num.erase(num.begin()+ c);
    }

    return res;
}