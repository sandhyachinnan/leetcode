class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       vector<int>a;
       for(int i=0;i<words.size();i++)
       {
        for(auto c:words[i])
        {
            if(c==x)
            {
                a.push_back(i);
                break;
            }
        }
        }
        return a;
        
    }
};