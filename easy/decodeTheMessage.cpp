class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        char start = 'a';
        char mapping[1000] = {0};
        for (auto ch : key)
        {
            if (ch != ' ' && mapping[ch] == 0)
            {
                mapping[ch] = start;
                start++;
            }
        }
        string ans;
        for (auto ch : message)
        {
            if (ch == ' ')
            {
                ans.push_back(' ');
            }
            else
            {
                // char decode=mapping[ch];
                ans.push_back(mapping[ch]);
            }
        }
        return ans;
    }
};