class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto a :arr)
        {
            m[a]++;
        }
        unordered_map<int,int>f;
        for(auto c :m)
        {
            f[c.second]++;
        
        if(f[c.second]>1)
        {
            return false;
        }
        }
        return true;;
    }
};