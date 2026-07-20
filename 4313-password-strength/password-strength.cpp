class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<int>m;
        int sum=0;
        for(auto c:password)
        {
            if(m.find(c)==m.end(c))
            {
                m.insert(c);
        
            if(c>='a'&&c<='z')
            {
                sum+=1;
            }
            else if(c>='A'&&c<='Z')
            {
                sum+=2;
            }
            else if(c>='0' &&c<='9')
            {
                sum+=3;
            }
            else
            {
                sum+=5;
            }
        }
        }
        return sum;
    }
};