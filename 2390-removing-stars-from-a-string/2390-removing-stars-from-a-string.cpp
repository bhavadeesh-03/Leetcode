class Solution {
public:
    string removeStars(string s) {
        string d;
        int c = 0;
        for(int i = s.length() - 1;i >= 0;i--) {
            if(s[i] == '*') {
                c++;
            }
            else {
                if(c > 0) {
                    s[i] = '*';
                    c--;
                }
                else {
                    d += s[i];
                }
            }
        }
        reverse(d.begin(),d.end());
        return d;
    }
};