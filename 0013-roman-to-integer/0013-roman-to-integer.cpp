class Solution {
public:
    int romanToInt(string s) {
        // Mappinhg roman numerals with their values
        unordered_map<char , int> romanMap ={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
                
         int result = 0;
         // Taking the length of string
         int n = s.length();

        // Start a loop through the string
        for (int i = 0; i < n; i++) {
            // If the current value is less than the next value, subtract it
            if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];
            } else {
                // else add it
                result += romanMap[s[i]];
            }
        }

        return result;
        
        
    }
};