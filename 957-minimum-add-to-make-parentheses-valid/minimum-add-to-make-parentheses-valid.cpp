class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int d=0,a=0;;
        for(auto c:s)
        {

            if(c=='(')
            {
                d++;

            }
            else
            {
                if(d>0) {
                    d--;
            }
            else
            {
                a++;
            }
            }
        }
        return a+d;
    }
};