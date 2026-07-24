class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        unordered_map<char,int>m;
        if(k==1||k==0) return 0;
        int a=0;
        int i=0,j=0;
        int p=1;
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            p*=nums[j];
            while(p>=k)
            {
                p/=nums[i];
                i++;
            }
            a+=(j-i+1);
        }
        return a;

 
    }
};