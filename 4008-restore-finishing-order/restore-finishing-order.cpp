class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(auto a:order)
        {
            for(auto f:friends)
            {
                if(f==a)
                {
                    ans.push_back(a);
                }
            }
        }
        return ans;
    }
};