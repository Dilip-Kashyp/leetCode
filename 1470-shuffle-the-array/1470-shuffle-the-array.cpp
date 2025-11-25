class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> array(2*n);

        for (int i = 0; i < n; i++){
            array[2*i] = nums[i];
            array[2*i + 1] = nums[i+n];
        }
        return array;
    }
};