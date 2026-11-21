class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int &target) 
    {
        int count = 0;
        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] >= target)
            {
                ++count;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna