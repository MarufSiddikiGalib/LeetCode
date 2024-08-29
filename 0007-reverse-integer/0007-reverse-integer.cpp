class Solution {
public:
    int reverse(int x) {
        
        
        
         int reversedNumber = 0;

            while (x != 0) {
            int pop = x % 10;   // Extract the last digit
            x /= 10;            // Remove the last digit from x

            // Check for overflow before reversing the number
            if (reversedNumber > INT_MAX/10 || (reversedNumber == INT_MAX / 10 && pop > 7))             {
                return 0; // Positive overflow case
            }
                
            if (reversedNumber < INT_MIN/10 || (reversedNumber == INT_MIN / 10 && pop < -8))             {
                return 0; // Negative overflow case
            }

            reversedNumber = reversedNumber * 10 + pop; // Reverse the number
        }

        return reversedNumber;
        
        
        
    }
};