class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int MOD = 1337;
        a = a % MOD;
        int result = 1;
        for (int i = b.size() - 1; i >= 0; i--) {
            int digit = b[i];
            int part = 1;
            for (int j = 0; j < digit; j++) {
                part = (part * a) % MOD;
            }
            result = (result * part) % MOD;
            int newA = 1;
            for (int j = 0; j < 10; j++) {
                newA = (newA * a) % MOD;
            }
            a = newA;
        }
        
        return result;
    }
};