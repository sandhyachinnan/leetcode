class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {   
            int d=i,s=0;
            while(d !=0)
            {
                s+=(d%2);
                d/=2;
            } 
            if(s==k)
            {
                sum+=nums[i];
            }   
        }
        return sum;   
    }
};