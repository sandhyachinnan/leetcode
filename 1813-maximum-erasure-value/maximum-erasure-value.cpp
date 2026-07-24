class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int>m;
        int i=0,j=0;
        int n=nums.size();
        int maxx=INT_MIN;
        int sum=0;
        while(j<n)
        {
            m[nums[j]]++;
            sum+=nums[j];
            while(m[nums[j]]>1)
            {
                m[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            maxx=max(maxx,sum);
            j++;
        }
        return maxx;
    }
};