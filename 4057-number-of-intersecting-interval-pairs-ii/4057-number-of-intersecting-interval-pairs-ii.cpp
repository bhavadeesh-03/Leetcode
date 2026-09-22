class Solution {
public:
    int find(vector<vector<int>>& a,int n,int i){
        int l = 0,r = n - 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid][0] <= a[i][1]){
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return l - 1;
    }
    long long countIntersectingIntervals(vector<vector<int>>& a) {
        long ans = 0;
        sort(a.begin(),a.end());
        int n = a.size();
        for(int i = 0;i < n;i++){
            int idx = find(a, n, i);
            ans += idx - i;
        }
        return ans;
    }
};