#include "solution.hpp"

bool Solution::isValidSudoku(vector<vector<char>> &board)
{
    int row[9][9] = {{0,}, }, col[9][9] = {{0,}, }, subMatrix[9][9] = {{0,} };

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
        {
            if(board[i][j] == '.')
                continue;

            int val = board[i][j] - '1';
            if(row[i][val] == 1 || col[j][val] == 1 || subMatrix[i/3*3+j/3][val] == 1)
                return false;
            else
            {
                row[i][val] = 1;
                col[j][val] = 1;
                subMatrix[i/3*3+j/3][val] = 1;
            }
        }
    
    return true;
}