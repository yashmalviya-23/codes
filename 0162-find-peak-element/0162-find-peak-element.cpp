class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        for(int i{0};i<nums.size();i++)
        {
            if(n==nums[i]) return i;
        }
        return 0;
    }
};