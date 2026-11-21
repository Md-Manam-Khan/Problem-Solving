class Solution 
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int &extraCandies) 
    {
        vector <bool> a;
        int maxi = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= maxi)
            {
                a.push_back(true);
            }
            else
            {
                a.push_back(false);
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna