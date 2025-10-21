class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int len = nums.size();
        int l = 1;
        for (int r = 1; r < len; r++){
            if (nums[r] != nums[l-1]){
                nums[l] = nums[r];
                l++;
            }
        }
        return l;
    }  
};