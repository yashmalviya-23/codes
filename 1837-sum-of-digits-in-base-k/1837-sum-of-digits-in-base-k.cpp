class Solution {
public:
    int sumBase(int n, int k) {
        
        if (n==0) return 0;       
        
        int final=0;
        
        while(n!=0)
        {
            final+=n%k;
            n/=k;
        }
  
        return final;        
    }
};