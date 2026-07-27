class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       unordered_map<int,int>m;
       vector<int>ans;
       int count=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         m[nums[i]]++;
       } 
       for(auto c:m)
       {
        if(c.second==2)
        {
           ans.push_back(c.first);
        }
       }
       return ans;
    }
};