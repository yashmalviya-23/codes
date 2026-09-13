class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int count=0;
        while(count<2){
            for(int i=0;i<nums.size();i++){
                ans.push_back(nums[i]);
            }
            count++;
        }
        return ans;
    }
};