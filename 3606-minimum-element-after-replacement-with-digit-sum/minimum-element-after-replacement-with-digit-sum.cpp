class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0;
            while(nums[i]!=0)
        {
            sum+=nums[i]%10;
            nums[i]/=10;
        }
        for(int i=0;i<nums.size();i++)
        {
            minn=min(minn,sum);
        }
        }
        return minn;
    }
};