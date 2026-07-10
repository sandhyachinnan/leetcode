class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>s;
        int sum=0;
        for(auto a:nums)
        {
            sum+=a;
            s.push_back(sum);
        }
        return s;
    }
};