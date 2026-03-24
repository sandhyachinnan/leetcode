class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(const string&s:words)
        {
            bool p=true;
            int i=0,j=s.size()-1;
            while(i<j&&s[i]==s[j])
            {
                i++;
                j--;
            }
            if(i>=j)return s;
        }
        return "";
    }
};