class Solution {
public:
    int minMoves2(vector<int>& a) {
        sort(a.begin(),a.end());
        int n;
        if(a.size() % 2 == 0) {
            n = (a[a.size() / 2] + a[(a.size() / 2) - 1]) / 2;
        }
        else {
            n = a[(a.size() / 2)];
        }
        int k = 0;
        for(int i = 0;i < a.size();i++) {
            k += abs(a[i] - n);
        }
        return k;
    }
};