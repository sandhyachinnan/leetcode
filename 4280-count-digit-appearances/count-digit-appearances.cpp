class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(auto s:nums)
        {
            if(s==0 && digit==0)
            {
                count++;
                continue;
            }
            while(s!=0)
            {
                if(s%10==digit)
                {
                    count++;
                }
                s/=10;
            }
        }
        return count;

    }
};