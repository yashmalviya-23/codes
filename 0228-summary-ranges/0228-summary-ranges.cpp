class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.empty()) return ans;
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1) continue;
            if(a == nums[i-1])
                ans.push_back(to_string(a));
            else
                ans.push_back(to_string(a)+"->"+to_string(nums[i-1]));
            a=nums[i];
        }
        if(a == nums.back())
            ans.push_back(to_string(a));
        else
            ans.push_back(to_string(a)+"->"+to_string(nums.back()));
        return ans;
    }
};