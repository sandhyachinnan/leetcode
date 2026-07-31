class Solution {
public:
    int minimumPushes(string word) {
      vector<int>f(26,0);
      for(auto c : word)
      {
        f[c-'a']++;
      }  
      sort(f.rbegin(),f.rend());
      int p=0;
      for(int i=0;i<26 &&f[i]>0;++i)
      {
        p+=f[i]*(i/8+1);
      }
      return p;
    }
};