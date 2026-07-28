class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) return 1;

        string binary = "";

        while (n > 0) {
            binary += (n % 2) + '0';
            n /= 2;
        }

        reverse(binary.begin(), binary.end());

        for (int i = 0; i < binary.length(); i++) {
            if (binary[i] == '1')
                binary[i] = '0';
            else
                binary[i] = '1';
        }

        int num = 0;
        for (char c : binary) {
            num = num * 2 + (c - '0');
        }

        return num;
    }
};