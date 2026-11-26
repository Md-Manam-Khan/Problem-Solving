class Solution 
{
public:
    bool canAliceWin(int &n) 
    {
        int alice = 10, bob, i = 1;
        while (n > 0)
        {
            if ((i % 2) == 1)
            {
                if (n >= alice)
                {
                    n -= alice;
                    bob = --alice;
                    i++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (n >= alice)
                {
                    n -= bob; 
                    alice = --bob;
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        if ((i % 2) == 1)
        {
            return false;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna