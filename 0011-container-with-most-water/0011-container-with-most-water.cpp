class Solution {
public:
    int maxArea(vector<int>& a) {
        int i = 0, j = a.size() - 1,h = 0,ans = -1;
        while(i < j) {
            ans = max(ans, min(a[i], a[j]) * (j - i));
            if(a[i] < a[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return ans;
    }
};