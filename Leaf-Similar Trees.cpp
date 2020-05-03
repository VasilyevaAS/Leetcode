//https://leetcode.com/problems/leaf-similar-trees/


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
    void getLeaves(TreeNode* node, vector<int> &leaves){
        if (node == nullptr){
            return;
        }
        if (node -> left == nullptr && node -> right == nullptr){
            leaves.push_back(node -> val);
            return;
        }
        getLeaves(node -> left, leaves);
        getLeaves(node -> right, leaves);
    }
    
    bool isSimilar(TreeNode* node, const vector<int> &leaves, int &pos){
        if (node == nullptr){
            return true;
        }
        if (node -> left == nullptr && node -> right == nullptr){
            if (pos < (int)leaves.size() && leaves[pos] == node -> val){
                pos++;
                return true;
            } else {
                return false;
            }
        }
        return isSimilar(node -> left, leaves, pos) && isSimilar (node -> right, leaves, pos);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1;
        getLeaves(root1, leaves1);
        int pos1 = 0;
        bool similar = isSimilar(root2, leaves1, pos1);
        return similar && pos1 == (int)leaves1.size();        
    }
};
