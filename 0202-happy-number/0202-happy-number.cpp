class Solution {
public:
    bool isHappy(int n) {
        int slow = square(n);
        int fast = square(square(n));
        while (slow!=fast){
            slow = square(slow);
            fast = square(square(fast));
        }
        return slow == 1;
    }
    int square (int x){
        long ans = 0;
        while (x > 0){
            int a = x%10;
            ans += a*a;
            x = x/10;
        }
        return ans;
    }
};