#include <iostream>
#include <string>

class Solution
{
public:
    int strStr(std::string haystack, std::string needle)
    {
        int ans = -1;
        size_t index = haystack.find(needle);

        if (index != std::string::npos)
        {
            ans = static_cast<int>(index);
        }

        return ans;
    }
};

int main()
{
    Solution solution;

    std::string haystack = "Hello, world!";
    std::string needle = "world";

    int result = solution.strStr(haystack, needle);

    if (result != -1)
    {
        std::cout << "Substring '" << needle << "' found at index " << result << "." << std::endl;
    }
    else
    {
        std::cout << "Substring '" << needle << "' not found." << std::endl;
    }

    return 0;
}
