class Solution {
public:
    int fun(string s) {
        int mask = 0;
        for(char c : s) {
            mask |= (1 << (c - 'a'));
        }
        return mask;
    }
    int maxProduct(vector<string>& a) {
        int maxi = 0,k = a.size();
        vector<int> mask;
        for(int i = 0;i < a.size();i++) {
            mask.push_back(fun(a[i]));
        }
        for(int i = 0;i < k - 1;i++) {
            for(int j = i + 1;j < k;j++) {
                if((mask[i] & mask[j]) == 0) {
                    maxi = max(maxi, (int)a[i].length() * (int)a[j].length());
                }
            }
        }
        return maxi;
    }
};