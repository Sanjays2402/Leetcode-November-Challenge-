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
    int res = INT_MIN;
    void maxi(TreeNode* root, TreeNode* ptr)
    {
        if(root == NULL || ptr == NULL)
            return ;
        
        res = max(res, abs(ptr->val - root->val));
        
        maxi(root, ptr->left);
        maxi(root, ptr->right);
    }
    void traverse(TreeNode* root)
    {
        if(root == NULL)
            return ;
        
        maxi(root, root);
        
        traverse(root->left);
        traverse(root->right);
        
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        traverse(root);
        
        return res;
    }
};
