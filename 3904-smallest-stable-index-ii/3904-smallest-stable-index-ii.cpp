class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        vector<int> v(a.size()), m(a.size());
        int mini = a[a.size() - 1],maxi = a[0];
        v[a.size() - 1] = mini;
        for(int i = a.size() - 2;i >= 0;i--) {
            if(a[i] < mini) {
                mini = a[i];
                v[i] = a[i];
            }
            else v[i] = v[i + 1];
        }
       // for(int i : v) cout << i << ' ';
        m[0] = a[0];
        for(int i = 1;i < a.size();i++) {
            if(a[i] > maxi) {
                maxi = a[i];
                m[i] = a[i];
            }
            else m[i] = m[i - 1];
        }
        //for(int i : m) cout << i << ' ';
        for(int i = 0;i < a.size();i++) {
            if(m[i] - v[i] <= k) return i;
        }
        return -1;
    }
};