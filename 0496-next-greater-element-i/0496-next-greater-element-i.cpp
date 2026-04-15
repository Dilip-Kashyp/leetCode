class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        
        for (int num1 : nums1) {
            int nextGreater = -1;
            bool found = false;
            for (int i = 0; i < nums2.size()-1; i++) {
                if ( num1 == nums2[i]) {
                    found = true;
                } else if ( found && nums2[i] > num1 ) {
                    nextGreater = nums2[i];
                    break;
                }
            }
            result.push_back(nextGreater);
        }
        return result;
    }
};