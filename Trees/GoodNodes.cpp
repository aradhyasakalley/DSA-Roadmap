class Solution {
public:
    int goodNodes(TreeNode* root) {
        int result = 0;
        dfs(root,root->val,result);
        return result;
    }
private: 
    void dfs( TreeNode* root , int max_yet, int& result) {
        if ( root == NULL ) return;
        if ( root -> val >= max_yet ) {
            result++;
        }
        dfs(root->left, max(max_yet,root->val),result);
        dfs(root->right, max(max_yet,root->val),result);
    }
};