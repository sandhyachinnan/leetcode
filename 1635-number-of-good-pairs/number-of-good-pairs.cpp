class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> m;
        for(auto a:nums)
        {
            m[a]++;
        }
        int sum=0;
        for(auto b :m)
        {
            int s=b.second-1;
           sum+=s*(s+1)/2;
        }
        return sum;

        
    }
};