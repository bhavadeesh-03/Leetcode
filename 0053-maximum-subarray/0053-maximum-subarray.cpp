class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int s = 0,maxi = INT_MIN;
        for(int i = 0;i < a.size();i++) {
            s = max(a[i], s + a[i]);
            maxi = max(maxi, s);
        }
        return maxi;
    }
};