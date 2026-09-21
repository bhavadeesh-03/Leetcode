class Solution {
public:
    int maximumPossibleSize(vector<int>& a) {
        int c = 1,prev = a[0];
        for(int i = 1;i < a.size();i++) {
            if(a[i] >= prev) {
                prev = a[i];
                c++;
            }
        }
        return c;
    }
};