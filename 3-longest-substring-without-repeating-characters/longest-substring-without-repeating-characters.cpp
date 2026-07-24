class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int maxx=INT_MIN;
        int i=0,j=0;
        int n=s.size();
        while(j<n)
        {
            m[s[j]]++;
        
        while(m[s[j]]>1)
        {
            m[s[i]]--;
            i++;
        }
        maxx=max(maxx,(j-i)+1);
        j++;
        }
        return  maxx==INT_MIN?0:maxx;
    }
};