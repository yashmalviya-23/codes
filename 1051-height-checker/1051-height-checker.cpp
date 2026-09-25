class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> T=heights;
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=T[i]) count++;
        }
        return count;
    }
};