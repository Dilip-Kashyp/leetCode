class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        for (int i = 0; i < n; i++){
            unordered_set <char> seen;
            int currLen = 0;
            for (int j = i; j < n; j++){
                if (seen.count(s[j])){
                    break;
                }
                seen.insert(s[j]);
                currLen++;
            }
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};