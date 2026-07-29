class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int c=0;
        int maxx=0;
        unordered_map<int,int>m;
        for(auto s :nums)
        {
            m[s]++;
        }
        for(auto d :m)
        {
            if(d.second>1)
            {
                return d.first;
            }
        }
        return -1;
    }
};