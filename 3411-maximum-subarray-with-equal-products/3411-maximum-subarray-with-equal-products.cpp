
class Solution {
public:
    int maxLength(vector<int>& a) {
        int n = a.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            long long g = a[i],l = a[i],pro = 1;
            for (int j = i; j < n; j++) {
                if (pro > 10000000000000000) break;
                pro *= a[j];
                g = gcd(g, (long long)a[j]);
                l = lcm(l, (long long)a[j]);
                if (pro == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
