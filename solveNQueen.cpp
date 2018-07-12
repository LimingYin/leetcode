#include "solution.hpp"

void solveQueens(vector<vector<string>> &solved, vector<int> &board, int i, int j)
{
    if(i == board.size())
    {
        if(j == board.size() - 1)
        {
            vector<string> boardStr(board.size(), string(board.size(), '.'));
            for(int k = 0; k < board.size(); ++k)
                boardStr[k][board[k]] = 'Q';
            solved.push_back(boardStr);
        }
        return;
    }

    for(int k = i-1; k >= 0; --k)
        if(board[k] == j || abs(board[k] - j) == abs(i - k))
            return;

    board[i] = j;

    for(int k = 0; k < board.size(); ++k)
        solveQueens(solved, board, i+1, k);

    board[i] = -1;
    return;
}

vector<vector<string>> Solution::solveNQueens(int n)
{
    vector<vector<string>> solved;
    vector<int> board(n, -1);
    for(int i = 0; i < n; ++i)
        solveQueens(solved, board, 0, i);

    return solved;
}