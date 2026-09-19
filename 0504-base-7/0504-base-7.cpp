class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string final;
        int a = num;
        while(num != 0) {
            int temp = abs(num) % 7;
            final.push_back(temp + '0');
            num /= 7;
        }
        if(a < 0)   final.push_back('-');
        reverse(final.begin(), final.end());
        return final;
    }
};