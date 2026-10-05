class Solution 
{
public:
    int maxDistinct(string &s) 
    {
        int i, count = 0, x;
        vector <int> a(26);
        for (i = 0; i < s.length(); i++)
        {
            x = static_cast<int>(s[i]) - 97;
            ++a[x];
        }
        for (i = 0; i < a.size(); i++)
        {
            if (a[i] != 0)
            {
                ++count;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna