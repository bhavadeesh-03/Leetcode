const int m = 1000;
int vec[m+1];
class Solution {
public:
    void seive(int n) {
        for(int i = 2;i <= n;i++) vec[i] = i;
       // if(n == 2) return 0;
        for (int i = 2;i <= sqrt(n);i++) {
            if(vec[i] == i) {
                for (int j = i * i;j <= n;j += i) {
                    if(vec[j] == j) vec[j] = i;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& a) {
        set<int> s;
        int maxi = *max_element(a.begin(),a.end());
        seive(maxi);
        for(int i : a) {
            int j = i;
            while(j != 1) {
                s.insert(vec[j]);
                j /= vec[j];
            }
        }
        return s.size();
    }
};