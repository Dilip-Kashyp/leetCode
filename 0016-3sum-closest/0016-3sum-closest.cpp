class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res_sum = nums[0] + nums[1] + nums[2];
        int min_difference = abs(res_sum - target);
        for (int i = 0; i < nums.size() - 2; i++){
            if (i < 0 && nums[i] == nums[i + 1]){
                continue;
            }
            int left = i+1;
            int right = nums.size() - 1;
            while (left < right){
                int sum = nums[i] + nums[left] + nums[right];
                int diff_to_target = abs(sum - target);
                if (diff_to_target < min_difference) {
                    min_difference = diff_to_target;
                    res_sum = sum;
                }
                if (sum == target){
                    return sum;
                } else if (sum > target) {
                    right--;
                }
                else {
                    left++;
                }
            }
        }
        return res_sum;
    }
};