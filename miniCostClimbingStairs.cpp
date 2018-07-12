#include "solution.hpp"

int Solution::miniCostClimbingStairs(vector<int> & cost)
{
    /*
     *@ cost : vector of each stair cost 
     *@ cost : minimum cost to climb strairs
     */

    int a = cost[0];
    int b = cost[1];
    for(size_t i = 2; i < cost.size(); ++i)
    {
        int temp = b;
        b = (a < b ? a : b)  + cost[i];
        a = temp;
    }

    return a < b ? a : b;
}