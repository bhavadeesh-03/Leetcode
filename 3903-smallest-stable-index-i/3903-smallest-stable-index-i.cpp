class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int maxi = INT_MIN,mini = INT_MAX,ans;
        for(int i = 0;i < a.size();i++) {
            ans = 0,maxi = INT_MIN,mini = INT_MAX;
            for(int j = 0;j <= i;j++) {
                maxi = max(maxi, a[j]);
            }
            for(int k = i;k <= a.size() - 1;k++) {
                mini = min(mini, a[k]);
            }
            ans = maxi - mini;
            if(ans <= k) return i;
        }
        return -1;
    }
};