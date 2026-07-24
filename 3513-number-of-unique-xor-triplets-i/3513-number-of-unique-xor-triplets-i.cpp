class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size() <= 2) return nums.size();
        else {
            int power = 1;
            while(power <= nums.size()) {
                power *= 2;
            }
            return power;
        }
    }
};