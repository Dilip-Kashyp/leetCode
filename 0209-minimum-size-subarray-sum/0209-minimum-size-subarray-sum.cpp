#include <algorithm> 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currSum = 0, minSum = INT_MAX; 
        int left = 0;
        for (int right = 0; right < nums.size(); right++){
            currSum += nums[right];
            while (currSum >= target){
                minSum = min(minSum, right - left + 1);
                currSum -= nums[left];
                left++;
            }
        }
        return minSum == INT_MAX ? 0 : minSum;
    }
};