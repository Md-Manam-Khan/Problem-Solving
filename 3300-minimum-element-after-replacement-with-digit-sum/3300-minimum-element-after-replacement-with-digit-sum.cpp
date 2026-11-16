class Solution
{
public:
    int minElement(vector<int>& nums) 
    {
        vector <int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int sum = 0;
            while (x)
            {
                int n = x % 10;
                sum += n;
                x /= 10;
            }
            a.push_back(sum);
        }
        return *min_element(a.begin(), a.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna