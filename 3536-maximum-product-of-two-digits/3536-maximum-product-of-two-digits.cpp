class Solution {
public:
    int maxProduct(int n) {
        int maxi = 0, second = 0;

        while (n > 0) {
            int d = n % 10;
            n /= 10;

            if (d > maxi) {
                second = maxi;
                maxi = d;
            }
            else if (d > second) {
                second = d;
            }
        }

        return maxi * second;
    }
};