class Solution {
public:
    int countCommas(int n) {
        int c = 0;
        int m = n;
        while(m > 0) {
            c++;
            m /= 10;
        }
        if(n >= 1000) {
           return n - 999;
        }
        else return 0;
    }
};