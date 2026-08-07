class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        if(s.length() <= 10) return ans;
        unordered_map<string, int> mp;
        for(int i = 0;i <= s.length() - 10;i++) {
            string r;
            for(int j = i;j < i + 10;j++) {
                r += s[j];
            }
            mp[r] += 1;
        }
        for(auto i : mp){
            if(i.second >= 2) ans.push_back(i.first);
        }
        return ans;
    }
};