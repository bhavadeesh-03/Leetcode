class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int s = 0,maxi = a[0];
        for(int i = 0;i < a.size();i++) {
            s += a[i];
            if(s > maxi) {
                maxi = s;
            }
            if(s < 0) {
                s = 0;
            }
        }
        return maxi;
    }
};