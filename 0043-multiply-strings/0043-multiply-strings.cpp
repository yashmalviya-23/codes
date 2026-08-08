class Solution {
public:
    string multiply(string a, string b) {
        if(a=="0" || b=="0") return "0";

        vector<int> v(a.size()+b.size());

        for(int i=a.size()-1;i>=0;i--)
            for(int j=b.size()-1;j>=0;j--) {
                int p=i+j+1;
                v[p]+=(a[i]-'0')*(b[j]-'0');
                v[p-1]+=v[p]/10;
                v[p]%=10;
            }

        string ans="";
        for(int x:v)
            if(ans!="" || x) ans+=x+'0';

        return ans;
    }
};