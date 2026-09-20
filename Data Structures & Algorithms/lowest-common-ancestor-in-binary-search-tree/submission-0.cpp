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
    TreeNode* findLca(TreeNode* root,TreeNode* p, TreeNode* q){
        if(!root || root == p || root == q) return root;
        TreeNode* left = findLca(root->left,p,q);
        TreeNode* right = findLca(root->right,p,q);

        if(!left) return right;
        else if(!right) return left;
        else return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findLca(root,p,q);
    }
};
