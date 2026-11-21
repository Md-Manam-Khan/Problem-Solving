class Solution {
public:
    int maxFreqSum(string &s) 
    {
        unordered_map <char, int> vow, con;
        for (int i = 0; i < s.size(); i++)
        {
            if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
            {
                ++vow[s[i]];
            }
            else
            {
                ++con[s[i]];
            }
        }
        int bcv = 0;
        for (auto &[ch,cn] : vow)
        {
            if (cn > bcv)
            {
                bcv = cn;
            }
        }
        int bcs = 0;
        for (auto &[ch,cn] : con)
        {
            if (cn > bcs)
            {
                bcs = cn;
            }
        }
        return bcv + bcs;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna