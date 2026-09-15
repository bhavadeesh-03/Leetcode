class Solution {
public:
    vector<string> ans;
    void Fun(string s, int o,int c, int n) {
        if(o == n && c == n) {
            cout << s << '\n';
            ans.push_back(s);
            return;
        }
        if(o < n) {
            s.push_back('(');
            Fun(s, o + 1, c, n);
            s.pop_back();
        }
        if(o > c) {
            s.push_back(')');
            Fun(s, o, c + 1, n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        Fun(s, 0, 0, n);
        return ans;
    }
};