class Solution {
public:
    string addStrings(string num1, string num2) {
        int max1 = num1.length() - 1;
        int max2 = num2.length() - 1;
        string result = "";
        int carry = 0;
        while (max1 >= 0 || max2 >= 0 || carry > 0) {
            int sum = carry;
            if (max1 >= 0) {
                sum += num1[max1--] - '0';
            }
            if (max2 >= 0) {
                sum += num2[max2--] - '0';
            }
            result += (sum % 10) + '0';
            carry = sum / 10;
        }
        reverse(result.begin(), result.end());

        return result;
    }
};