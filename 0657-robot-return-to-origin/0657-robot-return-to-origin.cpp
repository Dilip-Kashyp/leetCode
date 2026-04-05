class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char s : moves) {
            if ( s == 'U') x++;
            else if ( s == 'R') y++;
            else if ( s == 'D') x--;
            else if ( s == 'L') y--;
        }
        if (x == 0 && y == 0) {
            return true;
        } 
        return false;
    }
};