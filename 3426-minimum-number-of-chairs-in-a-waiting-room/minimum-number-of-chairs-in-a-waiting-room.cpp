class Solution {
public:
    int minimumChairs(string s) {
        int c=0;
        int maxx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E')
            {
                c++;
            }
            else
            {
                c--;
            }
            maxx=max(maxx,c);
        }
        return maxx;
          
    }

};