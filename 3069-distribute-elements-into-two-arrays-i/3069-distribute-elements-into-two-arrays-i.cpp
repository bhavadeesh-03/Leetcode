class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        vector<int> v1, v2;
        if(a.size() == 1) return a;
        v1.push_back(a[0]);
        v2.push_back(a[1]);
        for(int i = 2;i < a.size();i++) {
            if(v1.back() > v2.back()) {
                v1.push_back(a[i]);
            }
            else {
                v2.push_back(a[i]);
            }
        }
        a.clear();
        for(int i : v1) {
            a.push_back(i);
        }
        for(int i : v2) {
            a.push_back(i);
        } 
        return a;   
    }
};