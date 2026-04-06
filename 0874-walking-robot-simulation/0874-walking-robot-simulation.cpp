class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obstracles_set;
        for (auto& obs : obstacles) {
            obstracles_set.insert(to_string(obs[0]) + "#" + to_string(obs[1]));
        }
        vector<pair<int,int>> directions = {
        {0,1}, {1,0}, {0,-1}, {-1,0}
        };
        int x = 0, y = 0, max_dis = 0, dir = 0;
        for (int cmd : commands) {
            if (cmd == -1) {
                // right 0
                dir = (dir + 1) % 4;
            } else if (cmd == -2) {
                // left 1
                dir = (dir + 3) % 4;
            } else {
                for (int i = 0; i < cmd; i++) {
                    int nx = x + directions[dir].first;
                    int ny = y + directions[dir].second;
                    string next_move = to_string(nx) + "#" + to_string(ny);

                    if (obstracles_set.count(next_move)) {
                        break;
                    }
                    x = nx;
                    y = ny;
                    max_dis = max(max_dis, x*x + y*y);
                }
            }
        }
        return max_dis;
    }
};