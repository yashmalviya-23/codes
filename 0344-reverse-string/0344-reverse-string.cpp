class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<=(s.size()-1)/2;i++)
        {
            char temp1=s[i];
            char temp2=s[s.size()-i-1];
            s[s.size()-i-1]=temp1;
            s[i]=temp2;
        }
    }
};