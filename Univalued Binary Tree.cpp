//https://leetcode.com/problems/univalued-binary-tree/


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
    bool isUnivalTree(TreeNode* root) {
         queue<TreeNode*> q;
        q.push(root);
        int val = root->val;
        while (!q.empty()) {
            TreeNode* node = q.front(); q.pop();
            if (!node) continue;
            if (node->val != val) 
                return false;
            q.push(node->left);
            q.push(node->right);
        }
        return true;
    }
};
