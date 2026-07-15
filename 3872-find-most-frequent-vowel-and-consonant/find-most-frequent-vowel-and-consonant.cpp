class Solution {
public:
    int maxFreqSum(string s) {
        int n=s.size();
        unordered_map<char,int>freq;
        unordered_map<char,int>freq1;
        int maxx=0;
        int max1=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                freq[s[i]]++;
            }
            else
            {
                freq1[s[i]]++;
            }
        }
        for(auto a : freq)
        {
            maxx=max(maxx,a.second);
        }
        for(auto a : freq1)
        {
           
            max1=max(max1,a.second);
        }
        //cout<<maxx<<" "<<max1<<endl;
        return maxx+max1;
        
        
    }
};