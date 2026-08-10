class Solution {
public:
    int fun(string s, string r) {
        int mask = 0;
        for(char c : s) {
            mask |= (1 << (c - 'a'));
        }
        for(char c : r) {
            if((mask & (1 << (c - 'a')))) return 0; 
        }
        return 1;
    }
    int maxProduct(vector<string>& a) {
        int maxi = 0,k = a.size();
        for(int i = 0;i < k - 1;i++) {
            for(int j = i + 1;j < k;j++) {
                if(fun(a[i], a[j])) {
                    maxi = max(maxi, (int)a[i].length() * (int)a[j].length());
                }
            }
        }
        return maxi;
    }
};