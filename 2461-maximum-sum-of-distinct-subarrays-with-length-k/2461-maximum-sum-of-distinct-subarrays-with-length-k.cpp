
#include <set>
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long currSum = 0, maxSum = 0; 
        int left = 0;
        set<int> store;
        for (int right = 0; right < nums.size(); right++){
            while (store.count(nums[right]) || store.size() == k){
                currSum -= nums[left];
                store.erase(nums[left]);
                left++;
            }
            currSum += nums[right];
            store.insert(nums[right]);
            if (store.size() == k){
                maxSum = max(currSum, maxSum);
            }
        }
        return maxSum;
    }
};