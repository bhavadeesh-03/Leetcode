class Solution {
public:
    int c = 0;
    set<int> v; 
    void rec(int i, int n,vector<int>& a,vector<int>&used) {
        if(i == 3) {
            if(n % 2 == 0) v.insert(n);
            return;
        }
         for (int j = 0; j < a.size(); j++) {
            if (used[j]) continue;
            if (i == 0 && a[j] == 0) continue;
            used[j] = true;
            rec(i + 1, n * 10 + a[j], a, used);
            used[j] = false;
        }
    }
    int totalNumbers(vector<int>& d) {
        int i = 0,n = 0;
        vector<int> u(d.size(), false);
        rec(i, n, d, u);
        for(int i : v) cout << i << ' ';
        return v.size();
    }
};