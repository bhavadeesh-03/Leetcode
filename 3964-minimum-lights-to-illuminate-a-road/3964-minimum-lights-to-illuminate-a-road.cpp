class Solution {
public:
    int minLights(vector<int>& a) {
        vector<int> v(a.size(), 0);
        int h,k,mini = INT_MAX,maxi = INT_MIN;
        for(int i = 0;i < a.size();i++) {
            if(a[i] > 0) {
                h = max(0, i - a[i]);
                k = min((int)a.size() - 1, i + a[i]);
                v[h]++;
                if(k + 1 < v.size()) v[k + 1]--;
            }
        }
        for(int i = 1;i < v.size();i++) {
            v[i] = v[i] + v[i - 1];
        }
        //for(int i : v) cout << i << ' ';
        int c = 0,ans = 0;
        for(int i = 0;i < v.size();i++) {
            if(v[i] == 0 && c < 2) c++;
            else {
                //cout << c << ' ';
                if(c > 0) {
                    ans++;
                    c = 0;
                }
            }
        }
        if(c > 0) ans++;
        return ans;
    }
};