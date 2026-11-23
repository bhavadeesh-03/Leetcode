class Solution {
public:
    int findTheWinner(int n, int k) {
        std::vector<int> a;
        for (int i = 1;i <= n;i++) {
            a.push_back(i);
        }
        int cur_ind = 0;
        while(a.size() > 1) {
            int next_to_remove = (cur_ind + k - 1) % a.size();
            a.erase(a.begin() + next_to_remove);
            cur_ind = next_to_remove;
        }
        return a[0];
    }
};