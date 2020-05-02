//https://leetcode.com/problems/minimum-distance-between-bst-nodes/


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
    
    void visit(TreeNode* node, int &prev, bool &prevFilled, int &ans, bool & ansFilled){
        if (node == nullptr){
            return;
        }
        visit(node -> left, prev, prevFilled, ans, ansFilled);
        if (prevFilled){
            int diff = node -> val - prev;
            ans = min(ans, diff);
            ansFilled = true;
        }
        prev = node -> val;
        prevFilled = true;
        visit(node -> right, prev, prevFilled, ans, ansFilled);
    }
    
public:
    int minDiffInBST(TreeNode* root) {
        int prev = 0;
        bool prevFilled = false;
        int ans = INT_MAX;
        bool ansFilled = false;
        visit(root, prev, prevFilled, ans, ansFilled);
        if (!ansFilled){
            throw overflow_error("answer greater that INT_MAX");
        }
        return ans;
    }
};
