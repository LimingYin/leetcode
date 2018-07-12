#include "solution.hpp"

void Solution::rotate(vector<vector<int>> &matrix)
{
    for(size_t i = 0; i < matrix.size(); ++i)
        for(size_t j = i + 1; j < matrix.size(); ++j)
            swap(matrix[i][j], matrix[j][i]);

    for(auto & row : matrix)
        reverse(row.begin(), row.end());
}