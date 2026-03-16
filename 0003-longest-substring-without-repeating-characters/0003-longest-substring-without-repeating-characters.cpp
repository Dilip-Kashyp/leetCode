#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> subSet;
        int left = 0;
        int maxLen = 0;

        for (int r = 0; r < s.length(); r++) {

            while (subSet.find(s[r]) != subSet.end()) {
                subSet.erase(s[left]);
                left++;
            }

            subSet.insert(s[r]);
            maxLen = max(maxLen, r - left + 1);
        }

        return maxLen;
    }
};