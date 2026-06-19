class Solution {
public:
    int largestAltitude(vector<int>& a) {
        int maxi = 0,s = 0;
        for(int i = 0;i < a.size();i++) {
            s += a[i];
            if(s > maxi) {
                maxi = s;
            }
        }
        return maxi;
    }
};