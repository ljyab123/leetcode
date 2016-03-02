/*递归：
1、交换根节点的左右子树。
2、对左右子树分别执行递归反转 。
易犯错：未用中间变量进行交换
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if (root==NULL)
            return NULL;
        
        TreeNode* p;
        p=root->left;
        root->left=invertTree(root->right);
        root->right=invertTree(p);
        return root;
        
        
    }
};
