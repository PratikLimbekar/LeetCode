/*Problem: Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).*/

/*Learnt: Key mirroring and stack usage and binary trees*/

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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        stack<TreeNode*> s1, s2;

        s1.push(root->left);
        s2.push(root->right);

        while (!s1.empty() && !s2.empty()) {
            TreeNode* node1 = s1.top();
            TreeNode* node2 = s2.top();
            s1.pop();
            s2.pop();
            if (node1 == nullptr && node2 == nullptr) {
                continue;                
            }
            if (node1 == nullptr || node2 == nullptr || node1->val != node2->val) {
                return false;
            }

            s1.push(node1->left);
            s2.push(node2->right);

            s1.push(node1->right);
            s2.push(node2->left);
        }
        return s1.empty() && s2.empty();
    }
};
