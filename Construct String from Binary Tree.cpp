//https://leetcode.com/problems/construct-string-from-binary-tree/



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
    string tree2str(TreeNode* t) {
        if (t == nullptr){
            return "";
            
        } else {
            assert(t != nullptr);
            if (t -> left == nullptr){
                if (t -> right == nullptr){
                    return to_string(t -> val);
                } else {
                    return to_string(t -> val) + "()(" + tree2str(t -> right) + ")";
                }
            } else {
                assert (t -> left != nullptr);
                if (t -> right == nullptr){
                    return to_string(t -> val) + "(" + tree2str(t -> left) + ")";
                } else {
                    assert(t -> right != nullptr);
                    return to_string(t -> val) + "(" + tree2str(t -> left) + ")(" + tree2str(t -> right) + ")";
                }
            }
        }
        
    }
};
