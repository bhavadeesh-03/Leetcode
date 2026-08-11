class Solution {
public:
    int missingInteger(vector<int>& a) {
        // if(a.size() == 1) return a[0]+1;
        int c = 0,s = 0,maxi = INT_MIN,ans = 0,k = 1;
        for(int i = 0;i < a.size() - 1;i++) {
            if(a[k] - a[i] == 1) {
                c++;
                s += a[i];
                k += 1;
            }
            else {
                if(c > 0) s += a[i];
                if(s > 0) maxi = max(maxi, s);
                s = 0;
                c = 0;
                break;
            }
        }
        if(c > 0 && s > 0) {
            s += a[a.size() - 1];
            maxi = max(maxi, s);
        }
        // if(maxi == INT_MIN) {
            
        // }
        if(maxi == INT_MIN) maxi = a[0];
        sort(a.begin(),a.end());
        while(true) {
            if(binary_search(a.begin(),a.end(),maxi)) {
                maxi++;
            }
            else {
                ans = maxi;
                break;
            }
        }
        return ans;
    }
};