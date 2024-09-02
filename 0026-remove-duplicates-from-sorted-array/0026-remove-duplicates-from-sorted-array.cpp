class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         // Handle empty array
         if (nums.empty()) {
             return 0;
         } 
        
         // Start at the second element
         int uniqueIndex = 1; 

        // Loop through the array
        for (int i = 1; i < nums.size(); i++) {
        
        // Compare with the previous element
        if (nums[i] != nums[i - 1]) { 
            nums[uniqueIndex] = nums[i]; // Store the unique element at uniqueIndex
            uniqueIndex++; // Move uniqueIndex to the next position
        }
    }

    return uniqueIndex; // Unique elements
        
        
        
    }
};