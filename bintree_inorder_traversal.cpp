/*Problem: Given the root of a binary tree, return the inorder traversal of its nodes' values in a vector */

/*Learnt: Binary tree inorder traversal, use of stack, vector*/



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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s1;
        vector<int> ans;
        
        while (!s1.empty() || root != nullptr) {
            while (root != nullptr) {
                s1.push(root);
                root = root->left;
            }
            root = s1.top();
            s1.pop();
            if (root != nullptr) {
                ans.push_back(root->val);
            }
            if (root != nullptr) {
            root = root->right;
            }
        }
        return ans;
    }
};
