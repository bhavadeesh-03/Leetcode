class Solution {
public:
    long long gcdSum(vector<int>& a) {
        vector<int> v(a.size());
        int maxi = a[0];
        for(int i = 0;i < a.size();i++) {
            maxi = max(maxi, a[i]);
            v[i] = gcd(a[i], maxi);
        }
        sort(v.begin(),v.end());
        long g = 0;
        for(int i : v) cout << i << ' ';
        for(int i = 0;i < v.size() / 2;i++) {
            //cout << v[i] <<' '<< v[v.size() - i - 1] << '\n';
            g += gcd(v[i], v[v.size() - i - 1]);
        }
        if(a.size() == 1) return 0;
        return g;
    }
};