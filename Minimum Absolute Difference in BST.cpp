//https://leetcode.com/problems/minimum-absolute-difference-in-bst/


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
    void visit(TreeNode* node, int &minDiff, int &prev, bool &prevFilled){
        if (node == nullptr){
            return;
        }
        visit(node -> left, minDiff, prev, prevFilled);
        if (prevFilled){
             minDiff = min(minDiff, node -> val - prev);
        }
        prev = node -> val;
        prevFilled = true;
        visit(node -> right, minDiff, prev, prevFilled);
    }
    
public:
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        int prev = 0;
        bool prevFilled = false;
        visit(root, minDiff, prev, prevFilled);
        return minDiff;
        
    }
};
