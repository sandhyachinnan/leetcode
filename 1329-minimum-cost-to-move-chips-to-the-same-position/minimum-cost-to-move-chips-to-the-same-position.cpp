class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
       unordered_map<int,int>freq;
       vector<int>m;
       for(int i=0;i<position.size();i++)
       {
        freq[position[i]]++;
       } 
       int s=0,d=0;
       for(auto i :freq)
       {
         if(i.first%2==0)
         {
            s+=i.second;
         }
         else
         {
            d+=i.second;
         }
       }
       return min(s,d);
    }
};