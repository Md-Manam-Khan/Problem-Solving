class Solution 
{
public:
    vector<string> assignUmbrella(vector<int>& rain) 
    {
        int ac = 0, bc = 0;
        vector <string> a;
        for (int i = 0; i < rain.size() - 1; i++)
        {
            if (rain[i] == 0)
            {
                a.push_back("None");
            }
            else if (rain[i] == 1)
            {
                if (rain[i + 1] == 1)
                {
                    if (ac <= bc)
                    {
                        a.push_back("Alice");
                        ++ac;
                    }
                    else
                    {
                        a.push_back("Bob");
                        ++bc;
                    }
                }
                else
                {
                    a.push_back("Bob");
                    ++bc;
                }
            }
        }
        if (rain[rain.size() - 1] == 1)
        {
            a.push_back("Bob");
        }
        else
        {
            a.push_back("None");
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna