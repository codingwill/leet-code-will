class Solution {
public:
    vector<int> leaves1, leaves2;
    void traverse(vector<int> &leaves, TreeNode* node)
    {
        if (node == nullptr) return;
        if (node->left == nullptr && node->right == nullptr)
            leaves.push_back(node->val);
        traverse(leaves, node->left);
        traverse(leaves, node->right);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        traverse(leaves1, root1);
        traverse(leaves2, root2);
        if (leaves1.size() != leaves2.size()) return false;
        for (int i = 0; i < leaves1.size(); ++i)
        {
            if (leaves1[i] != leaves2[i]) return false;
        }
        return true;
    }
};