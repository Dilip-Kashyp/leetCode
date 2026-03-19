class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int sum = 0, minlen = INT_MAX, left = 0;
         for (int right = 0; right < nums.size(); right++){
            sum += nums[right];
            while (sum >= target){
                if ( (right - left + 1) < minlen) {
                    minlen = right - left + 1;
                }
            sum -= nums[left];
            left++;
            }
        }
    return (minlen == INT_MAX) ? 0 : minlen;
    }
};