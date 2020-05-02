//https://leetcode.com/problems/longest-univalue-path/


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
    
    int getUpPath(TreeNode* node, int &max){
        if (node == nullptr){
            return 0;
        }
        int leftH = getUpPath(node -> left, max);
        if (node -> left != nullptr && node -> left -> val != node -> val){
            leftH = 0;
        }
        int rightH = getUpPath(node -> right, max);
        if (node -> right != nullptr && node -> right -> val != node -> val){
            rightH = 0;
        }
        max = std::max(max, leftH + rightH);
        return 1 + std::max(leftH, rightH);
    }
    
public:
    int longestUnivaluePath(TreeNode* root) {
        int max  = 0;
        getUpPath(root, max);
        return max;
        
    }
};
