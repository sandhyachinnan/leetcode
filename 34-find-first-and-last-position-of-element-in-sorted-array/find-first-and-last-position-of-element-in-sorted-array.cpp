class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
     int l=0,h=n-1;
     int f_o=-1,l_o=-1;
     while(l<=h)
     {
        int m=(l+h)/2;
        if(nums[m]==target)
        {
            f_o=m;
            h=m-1;

        }
        else if(nums[m]>target)
        {
           h=m-1;

        }
        else
        {
            l=m+1;
        }
     }
     l=0,h=n-1;
         while(l<=h)
     {
        int m=(l+h)/2;
        if(nums[m]==target)
        {
            l_o=m;
            l=m+1;

        }
        else if(nums[m]>target)
        {
           h=m-1;

        }
        else
        {
            l=m+1;
        }
     }
     return {f_o,l_o};   
    }
};