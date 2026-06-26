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
    int deepestLeavesSum(TreeNode* root) {
        int maxi = INT_MIN,s = 0;
        queue<TreeNode*> q;
        vector<vector<int>> v;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            vector<int> l;
            for(int i = 0;i < n;i++) {
                TreeNode *r = q.front();
                if(r->left) q.push(r->left);
                if(r->right) q.push(r->right);
                l.push_back(r->val);
                q.pop();
            }
            maxi = max(maxi, (int)l.size());
            v.push_back(l);
        }
        for(int i = 0;i < v[v.size() - 1].size();i++) {
            s += v[v.size() - 1][i];
        }
        return s;
    }
};