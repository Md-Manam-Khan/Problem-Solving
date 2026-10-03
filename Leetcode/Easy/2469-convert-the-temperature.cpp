class Solution 
{
public:
    vector<double> convertTemperature(double &celsius) 
    {
        vector <double> a;
        double Kelvin = celsius + 273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;
        a.push_back(Kelvin);
        a.push_back(Fahrenheit);
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna