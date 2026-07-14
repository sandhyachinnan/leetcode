class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ans+=s[i];

            }
        }
            sort(ans.begin(),ans.end());
        int j=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                {
                    s[i]=ans[j++];
                }

            }
            
        
        return s;
    }
};