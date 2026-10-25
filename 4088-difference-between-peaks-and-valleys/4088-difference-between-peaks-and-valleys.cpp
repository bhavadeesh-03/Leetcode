class Solution {
public:
    int peakValleyDifference(vector<int>& a) {
        int s = 0,s1 = 0;
        for(int i = 1;i < a.size() - 1;i++) {
            if(a[i - 1] > a[i] && a[i + 1] > a[i]) s += a[i];
            if(a[i - 1] < a[i] && a[i + 1] < a[i]) s1 += a[i];
        }
        return s1 - s;
    }
};