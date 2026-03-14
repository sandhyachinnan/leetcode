class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m=0;
        for(int i=0;i<sentences.size();i++)
        {
            int w=count(sentences[i].begin(),sentences[i].end(),' ')+1;
            m=max(m,w);
        }
        return m;
        
    }
};