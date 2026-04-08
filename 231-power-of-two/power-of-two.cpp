class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long int p=1;
        while(p<n)
        {
            p=p*2;
        }
        if(p==n) return true;
        else
        {
            return false;
        }

        
    }
};