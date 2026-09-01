class Solution {
public:
    string tobin(int n) {
        string s;
        while(n > 0) {
            s += to_string(n % 2);
            n /= 2;
        }
        return s;
    }
    int minFlips(int a, int b, int c) {
        int n = log2(max({a, b, c})) + 1;
        //cout << n << '\n';
        int ans = 0;
        for(int i = 0;i < n;i++) {
            int bita = (a >> i) & 1;
            int bitb = (b >> i) & 1;
            int bitc = (c >> i) & 1;
            if((bita | bitb) != bitc) {
                if(bita == bitb) {
                    if(bitc == 1) ans += 1;
                    else ans += 2;
                }
                else {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};