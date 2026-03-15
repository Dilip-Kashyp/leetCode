#include <algorithm>
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        set<int> subSet;
        long long currSum = 0;
        long long maxSum = 0;
        int left;
        for(int right = 0; right < nums.size(); right++){
            while (subSet.contains(nums[right]) || subSet.size() == k){
                subSet.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }
            currSum += nums[right];
            subSet.insert(nums[right]);
            if (subSet.size() == k){
                maxSum = max(currSum, maxSum);
            }
        }   
        return maxSum;
    }
};