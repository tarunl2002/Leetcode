/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if (!root) {
            // If the current node is nullptr, return nullptr
            return nullptr;
        }

        // Recursively process the left subtree
        root->left = removeLeafNodes(root->left, target);
        // Recursively process the right subtree
        root->right = removeLeafNodes(root->right, target);

        // Check if the current node is a leaf node with the target value
        if (!root->left && !root->right && root->val == target) {
            return nullptr;
        }
        return root;
    }
};