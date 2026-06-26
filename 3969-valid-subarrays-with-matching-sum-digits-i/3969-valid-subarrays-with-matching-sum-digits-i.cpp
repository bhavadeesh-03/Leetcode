class Solution {
public:
    int firstDigit(long long num) {
        while(num >= 10) {
            num /= 10;
        }
        return num;
    }
    long long countValidSubarrays(vector<int>& a, int x) {
        int n = a.size();
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            long long sum = 0;
            for(int j = i; j < n; j++) {
                sum += a[j];
                if(sum % 10 == x && firstDigit(sum) == x) {
                    ans++;
                }
            }
        }
        return ans;
    }
};