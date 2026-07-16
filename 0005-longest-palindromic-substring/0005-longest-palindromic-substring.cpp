class Solution {
public:
    bool ispalindrome(string s) {
        int l = 0,r = s.length() - 1;
        while(l < r) {
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int l,r,c = 0,maxi = 0;
        string res,ans = "";
           for(int k = 0;k < s.length();k++) {
            l = k,r = s.length() - 1;
             while(l < r) {
                if(s[l] != s[r]) {
                    r--;
                }
                else {
                    res = "";
                    for(int i = l;i <= r;i++) {
                        res += s[i];
                    }
                    if(ispalindrome(res) && res.length() > 1) {
                        if((int)res.length() > maxi) {
                            maxi = (int)res.length();
                            ans = res;
                        }
                        break;
                    }
                    else r--;
                }
            }
        }
        if(maxi != 0) return ans;
        res = "";
        res += s[0];
        return res;
    }
};