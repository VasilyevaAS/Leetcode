//https://leetcode.com/problems/increasing-order-search-tree/


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
    
    void visit(TreeNode* node, TreeNode*& result){
        if (node == nullptr){
            return;
        }
        visit(node -> right, result);
        node -> right = result;
        result = node;
        visit(node -> left, result);
        node -> left = nullptr;
    }
        
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *result = nullptr;
        visit(root, result);
        return result;
    }
};
