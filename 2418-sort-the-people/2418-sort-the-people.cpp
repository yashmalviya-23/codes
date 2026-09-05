class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i{0};i<names.size();i++){
            int in=i;
            for(int j=i+1;j<names.size();j++){
                if(heights[j]<heights[in]){
                    in=j;
                }
            }
            if (in!=i)
            swap(heights[i],heights[in]);
            swap(names[i],names[in]);
        }
        reverse(names.begin(),names.end());
        return names;
    }
};