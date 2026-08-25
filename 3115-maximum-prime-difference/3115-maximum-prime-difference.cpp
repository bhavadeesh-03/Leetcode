class Solution {
public:
    int isPrime(int n) {
        if(n <= 1) return 0;
        for(int i = 2;i <= sqrt(n);i++) {
            if(n % i == 0) return 0;
        }
        return 1;
    }
    int maximumPrimeDifference(vector<int>& a) {
        int h = 0,q = 0;
        for(int i = 0;i < a.size();i++) {
            if(isPrime(a[i])) {
                h = i;
                break;
            }
        }
         for(int i = a.size() - 1;i >= 0;i--) {
            if(isPrime(a[i])) {
                q = i;
                break;
            }
        }
        return q - h;
    }
};