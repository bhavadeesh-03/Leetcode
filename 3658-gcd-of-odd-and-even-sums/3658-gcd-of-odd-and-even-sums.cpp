class Solution {
public:
    int gcd (int a, int b) {
        if(a == 0 || b == 0) {
            if(a == 0) return b;
            else return a;
        }
        if(a > b) return gcd(a % b , b);
        return gcd(a, b % a);
    }
    int gcdOfOddEvenSums(int n) {
        int s = 0, c = 0;
        for (int i = 1;i <= n;i++) {
            s += 2 * i;
        }
        for (int i = 1;i <= n;i++) {
            c += (2 * i) - 1;
        }
        return gcd(s, c);
    }
};