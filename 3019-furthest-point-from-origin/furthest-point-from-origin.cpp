class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
     int r=0,l=0,s=0;
     for(int i=0;i<moves.size();i++)
     {
        if(moves[i]=='L') l++;
        else if(moves[i]=='R') r++;
        else
        {
            s++;
        }
     } 
     return abs(r-l)+s;  
        
    }
};