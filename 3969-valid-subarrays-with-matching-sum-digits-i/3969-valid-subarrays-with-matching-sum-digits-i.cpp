class Solution {
public:
    int countValidSubarrays(vector<int>& a, int x) {
        long long ans,c = 0;
        string s;
        for(int i = 0;i < a.size();i++) {
            ans = 0;
            for(int j = i;j < a.size();j++) {
                ans += a[j];
                int first = ans / pow(10, (int)log10(ans));
                if(first == x && ans % 10 == x) c++;
            }
        }
        return c;
    }
};