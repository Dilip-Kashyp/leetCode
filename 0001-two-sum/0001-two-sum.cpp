class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int > map;
        for (int i=0; i < nums.size(); i++){
            int s = target - nums[i] ;
            if(map.contains(s)){
                return {map[s], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};