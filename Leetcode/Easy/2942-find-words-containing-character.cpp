class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector <int> m;
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == x)
                {
                    m.push_back(i);
                    break;
                }
            }
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna