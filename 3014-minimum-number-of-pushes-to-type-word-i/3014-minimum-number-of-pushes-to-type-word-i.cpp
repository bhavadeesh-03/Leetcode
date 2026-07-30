class Solution {
public:
    int minimumPushes(string w) {
        int cn = 0,ans = 0,c = 0;
        for(char i : w) {
            c++;
            if(c == 8) {
                cn += 1;
                ans += cn * c;
                c = 0;
            }
        }
        if(c > 0) ans += c * (cn + 1);
        return ans;
    }
};