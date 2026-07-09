class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s=0,d=0;
        for(auto num:nums)
        {
            if(num<10)
            {
                s+=num;
            }
            else if(num<100)
            {
                d+=num;
            }
        }
        return (s != d);
        
    }
    
};