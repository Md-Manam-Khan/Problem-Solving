class Solution 
{
public:
    int digitFrequencyScore(int &n) // 122
    {
        vector <int> a(10);
        int num = 0, x;
        string s = to_string(n);
        for (int i = 0; i < s.length(); i++)
        {
            x = s[i] - '0';
            ++a[x];
        }
        for (int i = 0; i < a.size(); i++)
        {
            num += (a[i] * i);
        }
        return num;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna