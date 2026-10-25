class Solution {
public:
    long long countSubarrays(vector<int>& a, int mini, int maxi) {
        long long c = 0,ans = 0;
        for(int i = 0;i < a.size();i++) {
            if(a[i] >= mini && a[i] <= maxi) {
                c++;
            }
            else {
                if(c > 0) {
                    ans += c * (c + 1) / 2;
                    c = 0;
                }
            }
        }
        if(c > 0) ans += c * (c + 1) / 2;
        return ans;
    }
};