class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            if(i < nums.size()-1 && nums[i] == nums[i+1]) {
                continue;
            }
            ans.push_back(nums[i]);
        }
        return ans;
    }
};