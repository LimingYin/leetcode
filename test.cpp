#include <iostream>

#include "solution.hpp"

using namespace std;

int main()
{
    Solution solution;
    vector<vector<int>> input{{3}, {2}};
    vector<int> res = solution.spiralOrder(input);
    for(auto val : res)    
        cout << val << endl;

    return 0;
}