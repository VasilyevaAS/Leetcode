//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/


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
    
    bool pairExists(TreeNode* node, int sum, unordered_set<int> &values){
        if (node == nullptr){
            return false;
        }
        if (pairExists(node->left, sum, values)){
            return true;
        }
        if (values.count(sum - node -> val)){
            return true;
        }
        values.insert(node->val);
        return pairExists(node -> right, sum, values);
    }
    
    
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> values;
        return pairExists(root, k, values);
    }
};

