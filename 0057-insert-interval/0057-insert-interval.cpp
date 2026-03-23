class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for (int i = 0; i < intervals.size(); i++) {
            auto &last = result.back();
            if (intervals[i][0] <= last[1]) {
                last[1] = max(intervals[i][1], last[1]);
            } else {
                result.push_back(intervals[i]);
            }
        }

        return result;
    }
};