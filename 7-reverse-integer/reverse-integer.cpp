class Solution {
public:
    int reverse(int x) {
        long long int r=0,s;
        while(x!=0)
        {
            s=x%10;
            r=r*10+s;
            if(r>INT_MAX||r<INT_MIN) return 0;
            x/=10;
        }
        return r;
        
    }
};