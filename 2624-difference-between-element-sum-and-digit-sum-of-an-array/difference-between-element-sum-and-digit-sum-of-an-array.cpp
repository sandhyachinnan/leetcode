class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int s=0,r=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
                  
        
        while(nums[i]>0)
        {
            r+=nums[i]%10;
            nums[i]/=10;
            
        }
        }
        return abs(s-r);
    

        
    }
};