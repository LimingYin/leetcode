#ifndef SOLUTION
#define SOLUTION

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;


// Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode* next;
  ListNode(int x): val(x), next(nullptr){}
};

// Definition for singly-linked list with a random pointer
struct RandomListNode
{
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x) : label(x), next(nullptr), random(nullptr){}
};

// Definition for an interval.
struct Interval
{
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};

// Definition for a binary tree node
struct TreeNode
{
  int val;
  TreeNode *left, *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
  public:
    int myAtoi(string);
    bool isPalindrome(int);
    int maxArea(vector<int>&);
    string intToRoman(int);
    int romanToInt(string);
    string longestCommonPrefix(vector<string>&);
    vector<vector<int>> threeSum(vector<int>&);
    int threeSumClosest(vector<int>&, int);
    vector<string> letterCombinations(string);
    vector<vector<int>> fourSum(vector<int>&, int);
    ListNode* removeNthFromEnd(ListNode*, int);    
    bool isValid(string);
    ListNode* mergeTwoLists(ListNode*, ListNode*);
    vector<string> generateParenthesis(int);
    ListNode* swapPairs(ListNode *);
    int removeDuplicates(vector<int>&);
    int removeElement(vector<int>&, int);
    int strStr(string, string needle);
    int divide(int, int);
    void nextPermutation(vector<int>&);
    int searchRotated(vector<int>&, int);
    vector<int> searchRange(vector<int>&, int);
    int searchInsert(vector<int>&, int);
    bool isValidSudoku(vector<vector<char>>&);
    string countAndSay(int);
    vector<vector<int>> combinationSum(vector<int>&, int);
    vector<vector<int>> combinationSum2(vector<int>&, int);
    string multiply(string, string);
    vector<vector<int>> permute(vector<int>&);
    vector<vector<int>> permuteUnique(vector<int>&);
    void rotate(vector<vector<int>>&);
    vector<vector<string>> groupAnagrams(vector<string>&);
    double Pow(double, int);
    vector<vector<string>> solveNQueens(int);
    int maxSubArray(vector<int>&);
    vector<int> spiralOrder(vector<vector<int>>&);
    bool canJump(vector<int>&);
    int jump(vector<int>&);
    vector<Interval> myMerge(vector<Interval>&);
    int lengthOfLastWord(string);
    vector<vector<int>> generateMatrix(int);
    string getPermutation(int n, int k);
    ListNode* rotateRight(ListNode*, int);
    int uniquePaths(int, int);
    int uniquePathsWithObstacles(vector<vector<int>>&);
    int minPathSum(vector<vector<int>>&);
    vector<int> plusOne(vector<int>&);
    vector<int> inorderTraversal(TreeNode*);
    string addBinary(string, string);
    int singleNumber(vector<int> &);
    RandomListNode* copyRandomList(RandomListNode*);
    int mySqrt(int);
    int climbStairs(int);
    int miniCostClimbingStairs(vector<int>&);
    int maxProfit2(vector<int> &);
    string minWindow(string&, string&);
};

#endif // SOLUTION