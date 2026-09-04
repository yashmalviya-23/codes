class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> final;
        int max=nums[0];

        for(int i{0};i<nums.size();i++){
            int min=nums[i];
            if(nums[i]>max){
                max=nums[i];
            }

            for(int j=i;j<nums.size();j++){
                if(min>nums[j]){
                    min=nums[j];
                }
            }
            if(max-min<=k){
                final.push_back(i);
            }    
        }
        sort(final.begin(),final.end());
        if(final.size()>0) return final[0];
        return -1;
    }
};