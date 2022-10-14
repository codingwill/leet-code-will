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
    vector<int> ans;
    
    vector<int> largestValues(TreeNode* root) {
        
        traverse(root, 0);
        return ans;
    }
    
    void traverse(TreeNode* node, int row) {
        
        if (node == nullptr) {
            return;
        }
        
        if (ans.size() <= row) {
            ans.push_back((int)pow(-2, 31));
        }
        ans[row] = max(ans[row], node->val);
        
        if (node->left != nullptr) {
            traverse(node->left, row + 1);
        }
        if (node->right != nullptr) {
            traverse(node->right, row + 1);
        }
    }
};