class Solution {
public:
    vector<string> ans;

    void solve(string &s, int idx, int parts, string curr) {
        if (parts == 4) {
            if (idx == s.size()) {
                curr.pop_back();
                ans.push_back(curr);
            }
            return;
        }

        for (int len = 1; len <= 3; len++) {
            if (idx + len > s.size())
                break;

            string part = s.substr(idx, len);

            if (part.size() > 1 && part[0] == '0')
                continue;

            int num = stoi(part);

            if (num <= 255) {
                solve(s, idx + len, parts + 1, curr + part + ".");
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return ans;
    }
};