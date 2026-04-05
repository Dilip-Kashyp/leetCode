class Solution {
public:
    void sortColors(vector<int>& nums) {
        // travers the array
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = 0; j < nums.size() - 1; j++) {
                if (nums[j] > nums[j+1]) {
                // swap if nums[i] > nums[i+1]
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }

    void swap (int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
};