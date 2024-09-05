class Solution {
public:
    int lengthOfLastWord(string s) {
        
        // Initialise strin g with 0
        int length = 0;
        
        // Start from the end of the string
        int i = s.size() - 1;  

        // Ignore spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the length of the last word 
        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }

        return length;
    }
};
