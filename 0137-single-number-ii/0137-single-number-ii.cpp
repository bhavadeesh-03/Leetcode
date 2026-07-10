class Solution {
public:
    int singleNumber(vector<int>& a) {
        map<int,int> mp;
        for(int i : a) mp[i]++;
        for(auto i : mp) {
            if(i.second == 1) return i.first;
        }
        return 0;
    }
};