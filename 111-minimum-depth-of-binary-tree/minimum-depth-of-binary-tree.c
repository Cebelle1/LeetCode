/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root == NULL) return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if(root->left == NULL && root->right == NULL) return 1;
    if(root->left == NULL) return 1 + right;
    if(root->right == NULL) return 1 + left;
    return right>left?left+1:right+1;
    

    if(left < right){
        return left + 1;
    }else{
        return right + 1;
    }
}