class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int count=0;
        int i=0,j=0,n=nums.size();
        int maxx=0;
        while(j<n)
        {
            
            if(nums[j]==0)
            {
                count++;
            }
            while(count>k)
            {
                if(nums[i]==0)
            {
                count--;
               
            }
             i++;
            }
            
            maxx=max(maxx,(j-i)+1);
            j++;




        }
        return maxx;
        
    }
};