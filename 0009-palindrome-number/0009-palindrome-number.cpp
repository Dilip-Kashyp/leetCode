class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers or numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }
        
        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }
        
        // For odd-digit numbers, we remove the middle digit by reversedHalf / 10
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
