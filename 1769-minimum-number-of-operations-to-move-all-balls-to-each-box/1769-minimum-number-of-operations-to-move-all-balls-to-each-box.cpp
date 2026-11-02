class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int move;
        vector <int> ball;
        for (int i = 0; i < boxes.size(); i++)
        {
            move = 0;
            for (int j = 0; j < boxes.size(); j++)
            {
                if (i != j)
                {
                    if (boxes[j] == '1')
                    {
                        move += abs(i - j);
                    }
                }
            }
            ball.push_back(move);
        }
        return ball;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna