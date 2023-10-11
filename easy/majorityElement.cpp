#include <vector>

class Solution
{
public:
    int majorityElement(std::vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[(nums.size() - 1)];
    }
};
