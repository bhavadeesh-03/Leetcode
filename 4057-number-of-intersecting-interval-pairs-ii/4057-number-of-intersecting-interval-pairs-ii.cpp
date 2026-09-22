class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& a) {
        long ans = 0;
        sort(a.begin(), a.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        int n = a.size();
        for(int i = 0;i < n;i++){
            int idx = upper_bound(
                        a.begin() + i + 1,
                        a.end(),
                        a[i][1],
                        [](int v, const vector<int>& r) {
                            return v < r[0];
                        }
                    ) - a.begin();
            ans += idx - i - 1;
        }
        return ans;
    }
};