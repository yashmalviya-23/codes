class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            char c1 = tolower(s[left]);
            char c2 = tolower(s[right]);
            
            if (c1 != c2)
                return false;

            left++;
            right--;
        }

        return true;
    }
};