class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(),s.begin() + s.length() / 2);
        int k = 0;
        for(int i = s.length() - 1;i >= ceil(s.length() / 2);i--) {
           s[i] = s[s.length() - 1 - i];
        }
        return s;
    }
};