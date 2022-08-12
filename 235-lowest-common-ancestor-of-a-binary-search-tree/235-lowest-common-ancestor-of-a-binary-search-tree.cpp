/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // By default LCA is the root of tree(subtree)
        int temp = root->val;
        // recurse the left subtree untill return the LCA(root)
        if(p->val < temp && q->val < temp)
            return lowestCommonAncestor(root->left, p, q);
        // recurse the right subtree untill return the LCA(root)
        else if(p->val > temp && q->val > temp)
            return lowestCommonAncestor(root->right, p, q);
        // else the tree root is the LCA
        else
            return root;
    }
};