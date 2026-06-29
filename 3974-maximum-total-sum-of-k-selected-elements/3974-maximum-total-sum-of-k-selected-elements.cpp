class Solution {
public:
    long long maxSum(vector<int>& a, int k, int mul) {
        long long s = 0;
        sort(a.rbegin(),a.rend());
        for(int i = 0;i < k;i++) {
            if(mul > 0) {
                s += (1ll * a[i] * mul);
                mul--;
            }
            else s += a[i];
        }
        return s;
    }
};