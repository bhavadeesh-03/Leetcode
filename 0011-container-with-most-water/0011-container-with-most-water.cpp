class Solution {
public:
    int maxArea(vector<int>& a) {
        int i = 0,j = a.size() - 1,maxi = INT_MIN;
        while(i < j) {
            maxi = max(maxi, (j - i) * min(a[i], a[j]));
            if(a[i] > a[j]) {
                j--;
            }
            else i++;
        }
        return maxi;
    }
};