class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_no = nums[0], min_flag = 0;
        int max_no = nums[0], max_flag = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < min_no){
                min_no = nums[i];
                min_flag = i;
            }
            if(nums[i] > max_no){
                max_no = nums[i];
                max_flag = i;
            }
        }
        int left = min(min_flag, max_flag);
        int right = max(min_flag, max_flag);
        int front = right + 1;
        int back = nums.size() - left;
        int both = left + 1 + nums.size() - right;
        return min(front, min(back, both));
    }
};