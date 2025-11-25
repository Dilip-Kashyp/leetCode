class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> array(nums.size() * 2);
        int i = 0;
        for(i; i < nums.size(); i++){
            array[i] = nums[i];
            array[i + nums.size()] = nums[i];
        }
        return array;
    }
};