class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> final;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = nums[i] + 1; j < nums[i + 1]; j++) {
                final.push_back(j);
            }
        }
        return final;
    }
};