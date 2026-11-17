class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        int count = 0;
        for (int i = 0; i < jewels.size(); i++)
        {
            for (int j = 0; j < stones.size(); j++)
            {
                if (jewels[i] == stones[j])
                {
                    ++count;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna