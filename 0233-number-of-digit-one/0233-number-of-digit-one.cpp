class Solution {
public:
    int countDigitOne(int n) {
        long long ans = 0;
        for (long long f = 1; f <= n; f *= 10) {
            long long a = n / f, b = n % f;
            ans += (a + 8) / 10 * f;
            if (a % 10 == 1) ans += b + 1;
        }
        return ans;
    }
};