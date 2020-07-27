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
    unordered_map<int,int> map;
    TreeNode* util(vector<int> ino,vector<int> posto,int s,int e,int &pidx){
        if(s>e) return NULL;
        TreeNode* root=new TreeNode(posto[pidx]);
        pidx--;
        if(s==e) return root;
        int idx=map[root->val];
        root->right=util(ino,posto,idx+1,e,pidx);
        root->left=util(ino,posto,s,idx-1,pidx);
        return root;
    }
    TreeNode* buildTree(vector<int>& ino, vector<int>& posto) {
        int n=ino.size();
        for(int i=0;i<n;i++) map.insert({ino[i],i});
        int pidx=n-1;
        return util(ino,posto,0,n-1,pidx);
    }
};