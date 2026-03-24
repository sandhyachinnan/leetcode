class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto s:words)
        {
            bool p=true;
            int i=0,j=s.size()-1;
            while(i<j)
            {
                if(s[i]!=s[j])
                {
                    p=false;
                    break;

                }
                i++;
                j--;
            }
            if(p)return s;
        }
        return "";
    }
};