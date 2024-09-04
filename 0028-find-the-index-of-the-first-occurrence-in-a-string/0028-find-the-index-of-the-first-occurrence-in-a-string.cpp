class Solution {
public:
    int strStr(string haystack, string needle) {
       
         int m = haystack.length();
         int n = needle.length();

         // If needle is an empty string, return 0 
         if (n == 0){
             return 0;
         }

        // If needle length is greater than haystack, return -1
        if (n > m){
            return -1;
        }
        
        // Loop through the haystack
        for (int i = 0; i <= m - n; ++i) {
            
            // Check if the substring of haystack starting from i matches the needle
            if (haystack.substr(i, n) == needle) {
                return i; // Return the starting index of the match
            }
        }

        return -1; // Return -1 if needle is not found
    }
};