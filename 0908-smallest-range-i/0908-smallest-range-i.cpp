class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int diff = mx - mn - 2 * k;
        return diff > 0 ? diff : 0;
    }
};