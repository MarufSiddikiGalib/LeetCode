class Solution {
public:
    bool isPalindrome(int x) {
        
        // If x is negative or 0 or end with 0 it is not a palindrome
        if (x < 0|| (x % 10 == 0 && x != 0)) {
            return false;
        }
        else{
            
        int reversed = 0; // Revered number will build and store here
        int original = x; // Store the original value of x

            
        while (x > 0 ) {
            
            // Extract the last digit 
            // In case of palindrome it always the reminder will be the last digit
            int lastDigit = x % 10;  
            
             // Check if the revsered int will cause an overflow (32 bit int)
            if (reversed > (INT_MAX - lastDigit) / 10) {
                return false;  // If there is overflow it's not a palindrome
            }
            
            // Now build the reversed number 
            // for palindrome number
            reversed = reversed * 10 + lastDigit;  
            
            // Remove the last digit from x (int can't store point value)
            x /= 10;
        }

        // Compare the original number with the reversed number
        return original == reversed;
        }
    }
};