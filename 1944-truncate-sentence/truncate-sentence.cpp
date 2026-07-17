class Solution {
public:
    string truncateSentence(string s, int k) {
        int sp=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                sp++;
                if(sp==k)
                {
                    break;
                }
                ans+=" ";
                
            }
        
         else
        {
            ans+=s[i];
        }
    }
    return ans;
        
    }
};