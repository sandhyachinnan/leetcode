class Solution {
public:
      bool isVowel(char c)
      {
        for(auto a : "aeiouAEIOU")
        {
            if(c==a) return true;
        }
        return false;
      }
    string reverseVowels(string s) {
        int n=s.size();

        int i=0,j=n-1;
        while(i<j)
        {

            if(!isVowel(s[i]))
            {
                i++;

            }
            else if(!isVowel(s[j])) {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }

        }
        return s;

        
    }
};