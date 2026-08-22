class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1;
        int a = n;

        while (n > 0) {
            int digit = n % 10;
            sum += digit;
            prod *= digit;
            n /= 10;
        }

        int temp = sum + prod;

        return a % temp == 0;
    }
};