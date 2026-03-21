class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int num : nums){
            total += num;
        }
        int leftSum = 0;
        for (int right = 0 ; right < nums.size(); right++ ){
            int rightSum = total - leftSum - nums[right];
            if (rightSum == leftSum){
                return right;
            }
            leftSum += nums[right];
        }
        return -1;
    }
};