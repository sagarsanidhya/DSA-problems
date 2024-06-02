#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        if (meetings.empty()) return days; // Edge case: No meetings

        sort(meetings.begin(), meetings.end());
        int start = meetings[0][0];
        int end = meetings[0][1];

        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] <= end)
                end = max(end, meetings[i][1]);
            else {
                days -= (end - start + 1);
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        days -= (end - start + 1);
        return days;
    }
};