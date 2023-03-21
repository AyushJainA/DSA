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
 Left right root
 */
class Solution {
    private:
    void post(TreeNode* root,vector<int> &ans){
        if(root==NULL){return ;}

        if(root->left){
            post(root->left,ans);
        }
        if(root->right){
            post(root->right,ans);
        }

        ans.push_back(root->val);
        return;

    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){return ans;}

        post(root,ans);

        return ans;
    }
};
