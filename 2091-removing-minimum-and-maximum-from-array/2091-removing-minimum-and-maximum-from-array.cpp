class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        int mini = a[0],maxi = a[0], h = 1,q = 1;
        for(int i = 0;i < a.size();i++) {
            if(a[i] < mini) {
                mini = a[i];
                h = i + 1;
            }
            if(a[i] > maxi) {
                maxi = a[i];
                q = i + 1;
            }
        }
        int k = min(h, q),b = max(h, q); 
        return min({b, k + ((int)a.size() - b + 1),(int)a.size() - k + 1});
    }
};