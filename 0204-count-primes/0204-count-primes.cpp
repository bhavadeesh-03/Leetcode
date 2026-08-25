const int m = 5000000;
bool vec[m+1];
class Solution {
public:
    void seive(int n) {
        for(int i = 2;i < n;i++) vec[i] = true;
       // if(n == 2) return 0;
        for (int i = 2;i <= sqrt(n);i++) {
            if(vec[i] == true) {
            for (int j = i * i;j <= n;j += i) {
                vec[j] = false;
            }
            }
        }
    }
    int countPrimes(int n) {
        int c = 0;
        seive(n);
        for(int i = 2;i < n;i++) {
            if(vec[i] == true) c++;
        }
        return c;
    }
};