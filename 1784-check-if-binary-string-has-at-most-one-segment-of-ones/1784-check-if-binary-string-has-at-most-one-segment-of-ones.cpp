class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0;
        for(int i{0};i<s.length();i++){
            if(s[i]=='1') count++;
        }
        for(int i=0;i<count;i++){
            if(s[i]!='1') return false;
        }
        return true;
    }
};