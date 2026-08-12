class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = 0,count = 0;
        for (int n : nums) {
            if (count == 0) x = n;
            count += (n == x) ? 1 : -1;
        }
        return x;
    }
};