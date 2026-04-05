class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> h_map;
        for (char c : s) {
            h_map[c]++;
        }

        for (char c : t) {
            if (!h_map.contains(c) || h_map[c] == 0) {
                return false;
            }
            h_map[c]--;
        }
        return true;
     }
};