class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        unordered_set<int>a;
        int n=nums1.size();
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        

        }
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            a.insert(nums2[i]);
        }
       
        return vector<int>(a.begin(),a.end()); 
    }
};