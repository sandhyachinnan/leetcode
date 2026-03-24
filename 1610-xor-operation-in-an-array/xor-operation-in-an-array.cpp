class Solution {
public:
    int xorOperation(int n, int start) {
        int nums,ns=0;
        for(int i=0;i<n;i++)
        {
            nums=start+2*i;
            ns^=nums;


        }
        return ns;

        

        
    }
};