class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int i=0,j=0;
        int maxx=INT_MIN;
        while(j<s.size())
        {
            m[s[j]]++;
            while(m[s[j]]>1)
            {
                m[s[i]]--;
                i++;
            }
            maxx=max(maxx,j-i+1);
            j++;

        }
        return maxx==INT_MIN?0:maxx;
        
    }
};