class Solution {
public:
    int calPoints(vector<string>& a) {
        stack<int> s;
        for(int i = 0;i < a.size();i++) {
            //cout << s.size() << ' ';
            if(a[i] == "+") {
                int h = s.top();
                s.pop();
                int k = s.top();
                s.push(h);
                s.push(h + k);
            }
            else if(a[i] == "D") {
                int j = s.top() * 2;
                s.push(j);
            }
            else if(a[i] == "C") {
                s.pop();
            } 
            else {
                s.push(stoi(a[i]));
            }
        }
        int su = 0;
        while(!s.empty()) {
           // cout << s.top() << ' ';
            su += s.top();
            s.pop();
        }
        return su;
    }
};