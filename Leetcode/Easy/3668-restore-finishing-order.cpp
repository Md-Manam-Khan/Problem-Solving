class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) 
    {
        vector <int> a;
        int i = 0, j = 0;
        while (i < order.size())
        {
            if(order[i] == friends[j]) // 3 1 2 5 4 === 1 3 4
            {
                a.push_back(order[i]);
                ++i;
                j = -1;
            }
            ++j;
            if (j == friends.size())
            {
                ++i;
                j = 0;
            }
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna