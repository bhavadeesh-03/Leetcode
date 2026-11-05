class Solution {
public:
    int minMoves(vector<int>& a) {
        int maxi = a[0];
        for(int i = 0;i < a.size();i++) {
            if(a[i] > maxi) maxi = a[i];
        }
        int s = 0;
        for(int i : a) {
            if(i != maxi) {
                s += maxi - i;
            }
        }
        return s;
    }
};