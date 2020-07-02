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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return {};
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        TreeNode* curr;
        while(q.size()>1){
            curr=q.front();
            q.pop();
            //cout<<temp.size()<<" ";
            if(curr==NULL) {q.push(NULL);
                            ans.push_back(temp);
                            temp.clear();
                           }
            else{
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                temp.push_back(curr->val);
            }
        }
        ans.push_back(temp);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
