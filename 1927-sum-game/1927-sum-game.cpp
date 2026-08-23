class Solution {
public:
    bool sumGame(string s) {
        int fs = 0,ss = 0,n = s.length(),q1 = 0,q2 = 0;
        for(int i = 0;i < n / 2;i++) {
            if(s[i] != '?') fs += (s[i] - '0');
            else q1++;
        }
        for(int i = (n / 2);i < n;i++) {
            if(s[i] != '?') ss += (s[i] - '0');
            else q2++;
        }
        if((q1 + q2) % 2 != 0) return 1;
        return (2 * fs + 9 * q1) != (2 * ss + 9 * q2);
    }
};