/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b){
    return a>b?a:b;
}
int dfs(struct TreeNode *node, int *maxVal){
    if(node == NULL) return 0;

        int left = max(0,dfs(node->left,maxVal)); //if path is negative, we exclude path by setting left to 0
        int right = max(0,dfs(node->right,maxVal));
        
       *maxVal = max(*maxVal, left + right + node->val);    //new link greater sum?
        return max(left,right)+node->val; //choose a path(left/right) for current node
}

int maxPathSum(struct TreeNode* root) {
    if(root == NULL) return 0;
    
    int max = root->val;
    int sums = dfs(root, &max);
    return max;
}

