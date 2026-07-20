class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>freq(26,0);
        for(auto c:s)
        {
            freq[c-'a']++;

        }
        int count=0;
        for(auto c:freq)
        {
            if(c!=0)
            {
                if(count==0)
                {
                    count=c;
                }
                else if(c!=count)
                {
                    return false;
                }

            }
            
           
        }
        return true;
    }
};