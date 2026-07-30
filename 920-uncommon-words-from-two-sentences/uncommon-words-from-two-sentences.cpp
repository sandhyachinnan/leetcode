class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m;
        vector<string>ans;
        string s ="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=' ') s+=s1[i];
            if(s1[i]==' '||i==s1.size()-1)
            {
                m[s]++;
                s="";

            }
        }
         for(int i=0;i<s2.size();i++)
        {
            if(s2[i]!=' ') s+=s2[i];
            if(s2[i]==' '||i==s2.size()-1)
            {
                m[s]++;
                s="";

            }
        }
      
        for(auto a : m)
        {
            if(a.second==1)
            {
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};