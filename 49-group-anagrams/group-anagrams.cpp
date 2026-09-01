class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>mp;
        for(auto c : strs)
        {
            string temp=c;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(c);
        }
        for(auto c : mp)
        {
            ans.push_back(c.second);
        }
        return ans;

    
    }
};