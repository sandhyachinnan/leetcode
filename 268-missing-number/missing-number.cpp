class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int c=0;
        for(auto s:nums)
        {
            c+=s;
        }
        return sum-c;
        
        
        

    }
};