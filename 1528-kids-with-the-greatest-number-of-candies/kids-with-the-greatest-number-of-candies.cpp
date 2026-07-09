class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=INT_MIN;
        vector<bool>ans;
        for(auto m:candies)
        {
             maxx=max(maxx,m);
        }
        for(auto c:candies)
        {
            ans.push_back(c+extraCandies>=maxx);
        }
        return ans;
        
    }
};