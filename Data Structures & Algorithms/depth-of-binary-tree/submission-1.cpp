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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        int maxDepth = 1;

        maxDepth = maxDepth_(root, maxDepth);

        return maxDepth;
        
    }

    int maxDepth_(TreeNode* root, int maxDepth) {

        int maxLeft = maxDepth;
        int maxRight = maxDepth;

        if (root->left)
            maxLeft = maxDepth_(root->left, maxDepth + 1);
        if (root->right)
            maxRight = maxDepth_(root->right, maxDepth + 1);

        cout << maxLeft << ' ' << maxRight << endl;
        
        return max(maxLeft, maxRight);
    }
};
