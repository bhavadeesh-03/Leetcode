using ll = long long;
const int mod = 1e9 + 7;
class Solution {
public:
    ll modPow(ll a, ll b) {
        ll ans = 1;
        while (b > 0) {
            if (b & 1)
                ans = (ans * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return ans;
    }
    ll dig(ll n) {
        int c = 0;
        while(n > 0) {
            c++;
            n /= 10;
        }
        return c;
    }
    int sumDecoded(vector<long long>& a) {
        ll s = 0,r,x,y;
        for(int i = 0;i < a.size();i++) {
            ll n = a[i];
            r = n / 10;
            x = r / (ll)pow(10, dig(r) - n % 10);
            y = r % (ll)pow(10, dig(r) - n % 10);
            cout << x << ' ' << y << '\n';
            s += modPow(x, y);
            s %= mod;
        }
        return s;
    }
};