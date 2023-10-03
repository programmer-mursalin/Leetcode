class Solution
{
public:
    void solve(TreeNode *root, bool &flag, int n)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->val != n)
        {
            flag = false;
        }
        solve(root->left, flag, n);
        solve(root->right, flag, n);
    }
    bool isUnivalTree(TreeNode *root)
    {
        int n = root->val;
        bool flag = true;
        solve(root, flag, n);
        return flag;
    }
};
