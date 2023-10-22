class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if ( root == NULL ) return result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            int count = q.size();
            TreeNode* node = q.front();
            q.pop();
            for ( int i = 0 ; i < count ; i ++) 
                if ( i == count ) {
                    result.push_back(node->val);
                }

                if ( node -> left != NULL ) {
                    q.push( node -> left );
                }
                if ( node -> right != NULL ) {
                    q.push( node -> right );
                }
            }
            return result;
        }
    }
};