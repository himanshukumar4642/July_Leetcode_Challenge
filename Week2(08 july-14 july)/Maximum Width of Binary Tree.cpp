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
    int widthOfBinaryTree(TreeNode* root) {
         if(root==NULL) return 0;
        unsigned long ans=0;
        queue<pair<TreeNode*,unsigned long>> q; 
        q.push(make_pair(root,0)); 
        while(!q.empty())
        {
            auto s=q.size();
             ans=max(ans,q.back().second-q.front().second);
            for(int i=0;i<s;i++)
            {
                auto x=q.front();
                q.pop();
                if(x.first->left!=NULL) q.push(make_pair(x.first->left,((2*x.second)+1)));
                if(x.first->right!=NULL) q.push(make_pair(x.first->right,((2*x.second)+2)));
            }
        }
        return ans+1;
    }
};
