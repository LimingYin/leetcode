#include <iostream>

#include "solution.hpp"

using namespace std;

int main()
{
    Solution solution;
    string s("ADOBECODEBANC");
    string t("ABC");
    string res = solution.minWindow(s, t);

    cout << res << endl;
    return 0;
}