class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>m;
       int maxx=0,d=0;
       for(auto c : nums)
       {
        m[c]++;
       }
       for(auto s :m)
       {
        
        maxx=max(maxx,s.second);
       }
        for(auto s : m)
        {
            if(s.second==maxx)
        {
            d+=s.second;

        }
       }
       return d;
    }

};