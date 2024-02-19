/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root== NULL)return 0;
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    if (root->left == NULL && root->right == NULL) return 1;
    if(root->left == NULL) return 1+right;  //if left child is empty return right child depth
    if(root->right == NULL) return 1+left; //if right child is empty return left child depth
    return left<right? left +1: right +1; //after both child return, choose the smallest and add self
}