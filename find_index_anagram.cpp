class Solution
{
public:
    bool allzeroelement(vector<int> &v)
    {

        for (int &i : v)
        {
            if (i != 0)
                return false;
        }
        return true;
    }

    vector<int> findAnagrams(string txt, string pat)
    {
        vector<int> counter(26, 0);
        for (int i = 0; i < pat.size(); i++)
        {
            counter[pat[i] - 'a']++;
        }
        int i = 0, j = 0;
        vector<int> v;
        while (j < txt.size())
        {
            counter[txt[j] - 'a']--;
            if (j - i + 1 == pat.size())
            {
                if (allzeroelement(counter))
                {
                    v.push_back(i);
                }
                counter[txt[i] - 'a']++;
                i++;
            }
            j++;
        }
        return v;
    }
};