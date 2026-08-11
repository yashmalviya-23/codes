class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int temp1=0,temp2=0;
        for(int i=0;i<k;i++){
            temp1=temp1+nums[i];
            temp2+=nums[nums.size()-1-i];
        }
        return temp2-temp1;
    }
};