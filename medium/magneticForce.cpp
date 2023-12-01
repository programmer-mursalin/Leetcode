class Solution
{
public:
    bool isPossible(vector<int> &position, int sol, int m)
    {
        int countCows = 1;
        int lastCow = position[0];
        for (int i = 1; i < position.size(); i++)
        {
            if (position[i] - lastCow >= sol)
            {
                countCows++;
                lastCow = position[i];
            }
            if (countCows >= m)
                return true;
        }
        return false;
    }
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int n = position.size();
        int s = 1;
        int h = position[n - 1] - position[0];
        int ans = -1;
        while (s <= h)
        {
            int mid = s + (h - s) / 2;
            if (isPossible(position, mid, m) == true)
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return ans;
    }
};