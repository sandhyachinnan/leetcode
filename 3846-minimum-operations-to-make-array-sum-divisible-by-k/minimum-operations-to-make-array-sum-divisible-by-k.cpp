class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(auto n:nums)
        {
            sum+=n;
        
        }
        return sum%k;
    }
};