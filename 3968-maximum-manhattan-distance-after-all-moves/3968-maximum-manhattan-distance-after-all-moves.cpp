class Solution {
public:
    int maxDistance(string a) {
        int h = 0, k = 0;
        for(int i = 0;i < a.size();i++) {
            if(a[i] == 'U') {
                k += 1;
            }
            else if(a[i] == 'R') {
                h += 1;
            }
            else if(a[i] == 'D') {
                k -= 1;
            }
            else if(a[i] == 'L') {
                h -= 1;
            }
        }
        for(int i = 0;i < a.size();i++) {
            if(a[i] == '_') {
                if(h < 0) h -= 1;
                else h += 1;
            }
        }
        //cout << h << ' ' << k;
        return abs(0 - h) + abs(0 - k);
    }
};