class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int Max = 0;
        int i = 0;
        int j = nums.size() - 1;
        while (j != 0)
        {
            int MaxValue = (nums[i] - 1) * (nums[j] - 1);
            int finalMax = max(Max, MaxValue);
            Max = finalMax;
            i++;
            if (i == j)
            {
                j--;
                i = 0;
            }
        }
        return Max;
    }
};