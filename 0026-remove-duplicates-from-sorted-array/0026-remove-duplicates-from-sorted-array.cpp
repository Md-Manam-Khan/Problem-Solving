class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        for(int i = 1; i < nums.size(); )
        {
            if(nums[i] == nums[i - 1])
            {
                nums.erase(nums.begin() + i);
            }
            else
            {
                i++;
            }
        }

        return nums.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna