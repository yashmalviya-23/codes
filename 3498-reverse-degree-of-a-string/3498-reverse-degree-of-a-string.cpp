class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int num = s[i]-'a'+1;
            ans=ans+((27-num)*(i+1));
        }
        return ans;
    }
};