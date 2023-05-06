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

    void solve(TreeNode* root, int low, int high, int &count)
    {
        if(root==NULL) return;

        if(root->val<=high && root->val>=low) count+=root->val;
        solve(root->left, low, high, count);
        solve(root->right,low,high ,count);
    }

    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        /*O(N) Solution to traverse the whole Binary search tree and add those nodes
        which lies in the range low and high */

        int count=0;
        solve(root, low, high ,count);
        return count;


    }   
};
