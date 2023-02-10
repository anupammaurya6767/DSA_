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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        bool ltr = true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
           int s = q.size();
            vector<int>a(s);
            for(int i=0;i<s;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                int index = ltr?i:(s-i-1);
                a[index] = node->val;
                
                if(node->left)
                    q.push(node->left);
                
                if(node->right)
                    q.push(node->right);
            }
            
            ltr = !ltr;
            ans.push_back(a);
        }
        
        
        return ans;

    }
};