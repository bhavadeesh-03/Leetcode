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
    int c;
    void postOrder(TreeNode* root) {
        if(root == NULL) return;
        postOrder(root->left);
        postOrder(root->right);
        if(root->left == NULL && root->right == NULL) {
            c++;
            //cout << c << ' ' << root->val << '\n';
        }
        else {
            if(root->left != NULL && root->right == NULL) {
                if(root->val >= root->left->val) {
                    c++;
                }
                else {
                    root->val = root->left->val;
                }
            } 
            else {
                int maxi = max(root->left->val, root->right->val);
                if(root->val >= maxi) {
                    c++;
                }
                else {
                    root->val = maxi;
                }
            }
        }
    }
public:
    int countDominantNodes(TreeNode* root) {
        c = 0;
        postOrder(root);
        return c;
    }
};