#include "solution.hpp"

void inorder(const TreeNode *tree, vector<int> &order)
{
    if(tree == nullptr)
        return;
    inorder(tree->left, order);
    order.push_back(tree->val);
    inorder(tree->right, order);
}

vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> res;
    inorder(root, res);

    return res;
}