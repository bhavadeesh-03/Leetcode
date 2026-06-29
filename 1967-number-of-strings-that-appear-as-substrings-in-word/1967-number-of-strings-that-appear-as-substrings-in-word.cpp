class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        int c = 0;
        for(int i = 0;i < p.size();i++) {
            for(int j = 0;j < w.size();j++) {
                if(w.substr(j, (int)p[i].length()) == p[i]) {
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};