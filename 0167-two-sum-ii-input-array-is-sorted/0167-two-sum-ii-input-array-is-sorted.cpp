class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Take two pointers: left and right
        int left = 0, right = numbers.size() - 1;
        
        // Check that the left pointer is less than the right pointer
        while (left < right) {
            // If the sum of numbers[left] and numbers[right] is less than the target
            if (numbers[left] + numbers[right] < target) {
                // Increment the left pointer to increase the sum of numbers[left] + numbers[right]
                left++;
            }
            // If the sum of numbers[left] and numbers[right] is greater than the target
            else if (numbers[left] + numbers[right] > target) {
                // Decrement the right pointer to decrease the sum of numbers[left] + numbers[right]
                right--;
            }
            // If neither case is true, it means numbers[left] + numbers[right] == target
            else {
                // Return the 1-based indices of the two numbers
                return {left + 1, right + 1};
            }
        }
        
        // If no match is found, return an empty vector
        return {};
    }
};
