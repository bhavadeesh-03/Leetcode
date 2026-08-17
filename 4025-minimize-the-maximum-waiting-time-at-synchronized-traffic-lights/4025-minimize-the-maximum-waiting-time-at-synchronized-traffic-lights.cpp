class Solution {
public:
    int minPenalty(int p, vector<int>& l, vector<int>& a) {
        int maxi = 0;
        int maxx = *max_element(l.begin(),l.end());
        for(int i = 0;i < a.size();i++) {
            if(maxx <= (a[i] % p)) {
                maxi = max(maxi, (p - (a[i] % p)));
            }
        }
        return maxi;
    }
};