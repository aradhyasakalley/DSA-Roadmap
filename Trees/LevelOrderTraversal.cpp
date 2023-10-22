class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if ( root == NULL ) return answer;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int count = q.size();
            vector<int>curr;
            for ( int i = 0 ; i < count ; i++ ) {
                TreeNode* node = q.front();
                q.pop();
                curr.push_back(node->val);
                if ( node -> left != NULL ) {
                    q.push( node -> left );
                }
                if ( node -> right != NULL ) {
                    q.push( node -> right );
                }
            }
            answer.push_back(curr);
        }
        return answer;
    }
};