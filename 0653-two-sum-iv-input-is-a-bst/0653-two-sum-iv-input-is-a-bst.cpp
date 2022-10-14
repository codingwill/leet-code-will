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
class Solution {
public:
    bool can = false;
    map<string, bool> num;
    vector<int> nodes;
    void initHash(TreeNode* root)
    {
        num[to_string(root->val)] = true;
        nodes.push_back(root->val);
        if (root->right != nullptr) initHash(root->right);
        if (root->left != nullptr) initHash(root->left);
    }
    
    bool findTarget(TreeNode* root, int k) 
    {
        initHash(root);
        for (int i = 0; i < nodes.size(); ++i)
        {
            int target = k - nodes[i];
            if (num[to_string(target)] && target != nodes[i]) 
            {
                //cout << target << '\n';
                return true;
            }
        }
        return false;
    }
};