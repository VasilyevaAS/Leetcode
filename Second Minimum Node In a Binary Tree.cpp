//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/



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
    
    void findSecondMinimumValue(TreeNode* node, int rootVal, int &ans){
        if (node == nullptr){
            return;
        }
        if (node -> val > rootVal){
            if (ans == -1){
                ans = node -> val;
            } else if (node -> val < ans){
                ans = node -> val;
            }
            return;
        }
        assert(node -> val == rootVal);
        findSecondMinimumValue(node -> left, rootVal, ans);
        findSecondMinimumValue(node -> right, rootVal, ans);
    }   
    
    
public:
    int findSecondMinimumValue(TreeNode* root) {
        int ans = -1;
        findSecondMinimumValue(root, root -> val, ans);
        return ans;
    }
};
