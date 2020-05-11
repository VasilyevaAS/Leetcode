//https://leetcode.com/problems/n-ary-tree-postorder-traversal/


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
    vector<int> postorder(Node* root) {
        vector<int> res;
        vector<Node*> node;
        if(root)node.push_back(root);
        while(!node.empty())
        {
            Node *p=node.back();
            node.pop_back();
            for(Node *n:p->children)
                node.push_back(n);
            res.push_back(p->val);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
