# include "solution.hpp"

int Solution::maxArea(vector<int>& height)
{
    int area = 0, areaMax = 0;
    size_t i = 0, j = height.size()-1;
    while(i < j)
    {
        if(height[i] < height[j])
        {
            area = height[i] * (j - i);
            ++i;
        }
        else
        {
            area = height[j] * (j - i);
            --j;
        }
        areaMax = areaMax > area ? areaMax : area;
    }

    return areaMax;
}