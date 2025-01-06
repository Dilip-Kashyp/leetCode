class Solution {
public:
    bool isPalindrome(string s) {
        // Use two pointers: one starting at the beginning and the other at the end of the string
        int l = 0, r = s.length() - 1;
        while (l < r) {
            // Check if the current character on the right is not alphanumeric
            while (l < r && !alphaNum(s[r])) {
                r--;
            }
            // Check if the current character on the left is not alphanumeric
            while (l < r && !alphaNum(s[l])) {
                l++;
            }
            // Compare the characters from both ends, ignoring case
            if (tolower(s[r]) != tolower(s[l])) {
                return false;
            }
            l++, r--;
        }
        return true;
    }

    // This function checks if a given character is alphanumeric (not a space or special character)
    bool alphaNum(char c) {
        return (
            (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9')
        );
    }
};
