class Solution {
public:
    int minimumPushes(string w) {
        map<char, int> mp;
        for(char i : w) mp[i]++;
        long cn = 0,ans = 0,c = 0;
        vector<int> v;
        for(auto i : mp) {
            v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        for(int i : v) {
            cout << i << ' ';
        }
        for(int i = v.size() - 1;i >= 0;i--) {
            c++;
            if(c == 8) {
                ans += (cn + 1) * v[i];
                cn += 1;
                c = 0;
            }
            else {
                ans += ((cn + 1) * v[i]);
            }
        }
        return ans;
    }
};