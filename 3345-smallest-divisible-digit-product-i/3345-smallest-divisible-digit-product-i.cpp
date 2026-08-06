class Solution {
public:
    int smallestNumber(int n, int t) {

        int digit = 1;
        int a = n;

        while (n != 0) {
            digit *= (n % 10);
            n /= 10;
        }

        if (digit % t == 0) {
            return a;
        }

        return smallestNumber(a + 1, t);
    }
};