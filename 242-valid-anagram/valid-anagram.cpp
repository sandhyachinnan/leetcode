class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int n1=t.size();
        int freq[50]={0};
        int freq1[50]={0};
        for( int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n1;i++)
        {
            freq1[t[i]-'a']++;
        }
        bool isTrue = true;
        for(int i=0;i<50;i++)
        {
            if(freq[i]!=freq1[i])
            {
                isTrue=false;
                break;
            }
        }
        return isTrue;
    }
};