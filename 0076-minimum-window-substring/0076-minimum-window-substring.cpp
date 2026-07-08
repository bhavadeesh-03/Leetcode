class Solution {
public:
    string minWindow(string a, string t) {
        if(a.length() < t.length()) return "";
        int h = -1,mini = INT_MAX;
        map<char,int> mpp;
        for(char i : t) mpp[i]++;
        int l = 0,r = 0;
        int cnt = t.size();
        while(r < a.length()) {
            if(mpp[a[r]] > 0) {
                cnt--;
            }
            mpp[a[r]]--;
            r++;
            while(cnt == 0) {
                if(r - l < mini) {
                    mini = r - l;
                    h = l;
                }
                mpp[a[l]]++;
                if(mpp[a[l]] > 0) {
                    cnt++;
                }
                l++;
            }
        }
        if(mini == INT_MIN || h < 0) return "";
        else return a.substr(h, mini);
    }
};