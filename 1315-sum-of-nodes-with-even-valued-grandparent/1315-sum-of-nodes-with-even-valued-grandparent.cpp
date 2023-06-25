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
    int sum = 0;
    void dfs(TreeNode* curr, TreeNode* parent, TreeNode* grand)
    {
        if(curr==NULL)
            return;
        if(grand!=NULL && grand->val%2==0)
            sum+=curr->val;
        
        dfs(curr->left,curr,parent);
        dfs(curr->right,curr,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
        dfs(root,NULL,NULL);
        return sum;
    }
};