class Solution {
public:
    int minOperations(string s) {
        int mini = INT_MAX,n = s.length(),maxi = INT_MAX;
        for(int i = 0;i < n / 2;i++) {
            int a = (s[i] - 'a' + 1), b = (s[n - i - 1] - 'a' + 1);
            if(abs(a - b) > 13) {
                if(mini == INT_MAX) mini = 0;
                mini += (26 - (abs(a - b)));
            }
            else {
                if(mini == INT_MAX) mini = 0;
                mini += abs(a - b);
            }
           // cout << a << ' ' << b << '\n';
        }
      //  cout << mini << '\n';
       // int n = s.size();
        int ans = INT_MAX;
        for (int r = 0; r < n; r++) {
            int cost = r;  
            for (int i = 0; i < n / 2; i++) {
                int x = s[(i + r) % n] - 'a';
                int y = s[(n - 1 - i + r) % n] - 'a';
                int change = min(
                    (x - y + 26) % 26,
                    (y - x + 26) % 26
                );
                cost += change;
            }
            ans = min(ans, cost);
        }
        return min(mini, ans);
    }
};