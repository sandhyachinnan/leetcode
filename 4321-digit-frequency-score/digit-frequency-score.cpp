class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>freq;
        int ans;
        while(n!=0)
        {
            ans=n%10;
            freq[ans]++;
            n/=10;
        }
        int sum=0;
        for(auto a :freq)
        {
            sum+=a.first*a.second;
        }
        return sum;
    }
};