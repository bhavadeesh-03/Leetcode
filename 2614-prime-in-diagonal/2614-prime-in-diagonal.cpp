class Solution {
public:
    int isprime(int n) {
        if(n <= 1) return 0;
        for(int i = 2;i <= sqrt(n);i++) {
            if(n % i == 0) return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& a) {
        int maxi = 0,n = a.size(),m = a[0].size();
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                if(i + j == m - 1 || i == j) {
                    if(isprime(a[i][j])) {
                        maxi = max(maxi, a[i][j]);
                    }
                }
            }
        }
        return maxi;
    }
};