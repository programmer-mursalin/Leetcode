class Solution
{
public:
    string removeDuplicates(string s)
    {

        int index = 0;
        string ans = "";
        while (index < s.length())
        {
            if (!ans.empty() && ans[ans.length() - 1] == s[index])
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};