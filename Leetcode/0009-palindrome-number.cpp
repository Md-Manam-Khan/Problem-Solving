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
        int first = 0;
        int last = s.length() - 1;
        while(first < last)
        {
            if(s[first] != s[last])
            {
                return false;
            }
            first++;
            last--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna