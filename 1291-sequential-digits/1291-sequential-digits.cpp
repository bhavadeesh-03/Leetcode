class Solution {
    using l = long long;
public:
    l fun(l n) {
        l h = 0;
        for(int i = 1;i <= n;i++) {
            h = (h * 10) + i;
        } 
        return h;
    }
    int dig(int n) {
        int c = 0;
        while(n > 0) {
            int m = n % 10;
            if(m >= 0) c++;
            n /= 10;
        }
        return c;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        int d = dig(low), di = dig(high);
        ////cout << d << ' ' << di << '\n';
        l h = fun(d);
        cout << h << ' ';
        string s = to_string(h);
        while(h <= high) {
            //cout << s << '\n';
            s = to_string(h);
            if(h >= low && h <= high) v.push_back(h);
            char ch = s[0];
            //cout << ch << ' ';
            s.erase(s.begin());
            s.push_back(((ch  - '0') + d) + '0');
            if((ch  - '0') + d == 10) {
                h = fun(d + 1);
                d++;
                //cout << h << ' ';
            }
            else h = stoi(s);
        }
        return v; 
    }
};