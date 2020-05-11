//https://leetcode.com/problems/maximum-depth-of-n-ary-tree/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int dfs(Node *r) {
        if (r == NULL)
            return 0;

        int d = 1;
        for (auto ch : r -> children)
            d = max(d, dfs(ch) + 1);

        return d;
    }
    int maxDepth(Node* root) {
        return dfs(root);
    }
};
