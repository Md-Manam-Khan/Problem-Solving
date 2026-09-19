class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
        {
            return false;
        }
        string s = to_string(x);
        int firstP = 0;
        int lastP = s.length() - 1;
        while(firstP < lastP)
        {
            if(s[firstP] != s[lastP])
            {
                return false;
            }
            firstP++;
            lastP--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna