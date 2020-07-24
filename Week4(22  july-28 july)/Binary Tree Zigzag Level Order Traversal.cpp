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
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(root);
        q.push(NULL);
        int flag=0;
        int l=0;
        while(!q.empty()){
            TreeNode* temp=q.front();
            if(temp){
                vector<int> x;
                while(q.front()!=NULL){
                    x.push_back(q.front()->val);
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    q.pop();
                    temp=q.front();
                }
                q.push(NULL);
                if(l%2){
                    reverse(x.begin(),x.end());
                }
                ans.push_back(x);
                l++;
            }
            q.pop();
        }
        return ans;
    }
};