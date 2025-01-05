class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longer = 0;
        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                // True means it's a starting number, and there is no element on the left.
                // .find returns .end if the search fails.
                int longest = 1;
                while (numSet.find(num + longest) != numSet.end()) {
                    longest++;
                }
                longer = max(longer, longest);
            }
        }
        return longer;
    }
};
