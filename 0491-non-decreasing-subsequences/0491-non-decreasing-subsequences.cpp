class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& a) {
        set<vector<int>> v;
        vector<int> ans;
        int n = a.size();
        for(int i = 1;i < pow(2, n);i++) {
            ans.clear();
            for(int j = 0;j < n;j++) {
                if((i & (1 << j)) > 0) {
                    if(ans.size() == 0 || a[j] >= ans.back()) {
                        ans.push_back(a[j]);
                    }
                    else {
                        break;
                    }
                }
            }
            if(ans.size() > 1) v.insert(ans);
        }
        vector<vector<int>> va(v.begin(),v.end());
        return va;
    }
};