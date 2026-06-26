class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> v(m);
        string s(n, '.');
        for(int i = 0;i < m;i++) {
            s = "";
            for(int j = 0;j < n;j++) {
                if(i == 1) {
                    if(j == n - 1) s += '.';
                    else s += '#';
                }
                else s += '.';
            }
            v[i] = s;
        }
        return v;
    }
};