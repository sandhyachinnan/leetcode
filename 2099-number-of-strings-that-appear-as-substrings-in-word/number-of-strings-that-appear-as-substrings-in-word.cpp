class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
        for(int j=0;j<patterns.size();j++)
        {
            if(word.find(patterns[j])!=-1)
            {
                c++;
            }
            
        }
        return c;
    }
};