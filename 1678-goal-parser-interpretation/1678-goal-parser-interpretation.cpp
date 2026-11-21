class Solution
{
public:
    string interpret(string &command) 
    {
        string s = "";
        for (int i = 0; i < command.size(); i++)
        {
            if (command[i] == 'G')
            {
                s += "G";
            }
            if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                {
                    s += "o";
                    ++i;
                }
                else
                {
                    s += "al";
                    i += 3;
                }
            }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna