class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &ans)
    {
        // base case
        if (root == NULL)
            return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> ans;
        inorder(root, ans);
        int i = 0, j = ans.size() - 1;
        int Min = INT_MAX;
        while (j != 0)
        {
            int difference = abs(ans[i] - ans[j]);
            int finalMini = min(difference, Min);
            Min = finalMini;

            i++;
            if (i == j)
            {
                j--;
                i = 0;
            }
        }
        return Min;
    }
};