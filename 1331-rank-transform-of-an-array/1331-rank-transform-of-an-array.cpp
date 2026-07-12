class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mpp;
        for(int i : arr) {
            mpp[i]++;
        }
        int c = 0;
        for(auto &i : mpp) {
            c++;
            i.second = c;
        }
        for(int i = 0;i < arr.size();i++) {
            arr[i] = mpp[arr[i]]; 
        }
        return arr;
    }
};