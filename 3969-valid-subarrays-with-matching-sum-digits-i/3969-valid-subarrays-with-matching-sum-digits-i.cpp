class Solution {
public:
    int countValidSubarrays(vector<int>& a, int x) {
        int n = a.size();
        long long c = 0;
        for(int i = 0;i < n;i++) {
            long long ans = 0;
            for(int j = i;j < n;j++) {
                ans += a[j];
                int first = ans / pow(10, (int)log10(ans));
                if(first == x && ans % 10 == x) c++;
            }
        }
        return c;
    }
};