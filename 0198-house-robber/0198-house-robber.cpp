class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1)
            return nums[0];

        if(n == 2)
            return max(nums[0], nums[1]);
            
        int sum = 0;
        int prev = 0;
        int curr = 0;
        for(int i = 0; i < n; i++) {
            sum = max(curr, prev + nums[i]);
            prev = curr;
            curr = sum;
        }
        return sum;
    }
};