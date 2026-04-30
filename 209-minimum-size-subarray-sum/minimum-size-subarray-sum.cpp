class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i=0,j=0,n=nums.size();
      int minn=INT_MAX,sum=0; 
      while(j<n)
      {
        sum+=nums[j];
      
      while(sum>=target)
      {
        minn=min(minn,(j-i)+1);
        sum-=nums[i];
        i++;
      
      
      }
      j++;
     
      }
        
      return (minn==INT_MAX ? 0:minn);    
    }
};