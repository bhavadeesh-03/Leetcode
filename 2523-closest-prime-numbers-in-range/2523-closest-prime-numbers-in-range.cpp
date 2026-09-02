const int m = 1000000;
bool vec[m+1];
class Solution {
public:
    void seive(int n) {
        for(int i = 2;i <= n;i++) vec[i] = true;
       // if(n == 2) return 0;
        for (int i = 2;i <= sqrt(n);i++) {
            if(vec[i] == true) {
                for (int j = i * i;j <= n;j += i) {
                    vec[j] = false;
                }
            }
        }
    }
    vector<int> closestPrimes(int l, int r) {
        seive(r);
        vector<int> a(2, -1);
        vector<int> m;
        for(int i = l;i <= r;i++) {
            if(vec[i] == true) m.push_back(i);
        }
       // cout << m.size() << ' ';
        if(m.size() >= 2) a[1] = m[m.size()-1],a[0] = m[m.size() - 2];
        else return a;
        int mini = a[1] - a[0];
        for(int i = m.size() - 1;i >= 1;i--) {
            if(m[i] - m[i - 1] <= mini) {
                a[1] = m[i];
                a[0] = m[i - 1]; 
                mini = m[i] - m[i - 1];
            }
        }
        return a;
    }
};