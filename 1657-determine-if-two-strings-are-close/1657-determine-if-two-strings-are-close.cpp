class Solution {
public:
    bool closeStrings(string s, string t) {
        map<char,int> mp,mp2;
        map<int,int> mp1;
        for(char i : s) mp[i]++;
        int c = 0,cn = 0;
        for(char i : t) {
            if(mp[i] == 0) {
                return 0;
            }
            mp2[i]++;
        }
        for(auto i : mp) {
            mp1[i.second]++;
        }
        for(auto i : mp2) {
            if(mp1[i.second] == 0) {
                return 0;
            }
            mp1[i.second]--;
        }
        for(auto i : mp1) {
            if(i.second > 0) return 0;
        }
        return 1;
    }
};