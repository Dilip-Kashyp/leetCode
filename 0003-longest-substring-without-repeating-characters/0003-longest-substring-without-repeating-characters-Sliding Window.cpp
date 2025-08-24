class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> seen;
        int maxLen = 0;
        int left = 0;
        for (int r = 0; r < s.size(); r++){
            while  (seen.count(s[r])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[r]);
            maxLen = max(maxLen, r - left + 1);
        }
        return maxLen;
    }
};