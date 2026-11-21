class Solution 
{
public:
    int percentageLetter(string &s, char &letter) 
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == letter)
            {
                ++count;
            }
        }
        return (count * 100) / s.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna