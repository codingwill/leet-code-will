/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


/*
** Author: wkwkwill (Willy I. K.)
** 2020/06/23
*/

class Solution 
{
private:
    int sum = 0;
    
public:
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if (root != nullptr) traverseRecursively(root);
        return sum;
    }
    
    void traverseRecursively(TreeNode* node)
    {
        
        if (node->left != nullptr)
        {
            TreeNode* temp = node->left;
            if (temp->left == nullptr && temp->right == nullptr)
            {
                sum += temp->val;
            }
            traverseRecursively(node->left);
        }
        if (node->right != nullptr)
        {
            traverseRecursively(node->right);
        }
    }
};