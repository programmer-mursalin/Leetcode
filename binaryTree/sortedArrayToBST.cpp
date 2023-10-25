lass Solution{
    public :
        TreeNode * sortedArrayToBST(vector<int> & nums){
                       if (nums.size() == 0){
                           return NULL;
}
return sortedArrayTobST(nums, 0, nums.size() - 1);
}
TreeNode *sortedArrayTobST(vector<int> &nums, int beg, int end)
{
    if (beg > end)
    {
        return NULL;
    }
    int mid = (beg + end) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = sortedArrayTobST(nums, beg, mid - 1);
    root->right = sortedArrayTobST(nums, mid + 1, end);
    return root;
}
}
;