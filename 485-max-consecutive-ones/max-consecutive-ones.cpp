class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0;
        int n=nums.size();
        if(n==1 && nums[0]==1)
        {
            return 1;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                c=0;
            }
            maxx=max(maxx,c);
        }
        return maxx;
        
    }
};