class Solution {
public:
    vector<bool> p;
    int fun1(int n) {
        int s = 0;
        for (int i = 2; i * i <= n; i++) {
            while(n % i == 0) {
                s += i;
                n /= i;
            }
        }
        if (n > 1) s += n;
        return s; 
    }
    void primeFactors(int n) {
        p.assign(n + 1, true);
        p[0] = p[1] = false;
        for(int i = 2;i * i <= n;i++) {
            for(int j = i * i;j <= n;j += i) {
                p[j] = false;
            }
        }
    }
    int smallestValue(int n) {
        primeFactors(n);
        int m = n;
        while(p[m] == 0) {
            int k = fun1(m);
            if(k == m) return n;
            m = k;
        }
        return m;
    }
};