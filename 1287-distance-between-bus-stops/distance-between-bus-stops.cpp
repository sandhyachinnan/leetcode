class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
      int s=0,cw=0;
      int minn=INT_MAX;
      if(start>destination)
      {
        swap(start,destination);
      }
      for(int i=start;i<destination;i++)
      {
        s+=distance[i];
      }  
      for(int i=0;i<distance.size();i++)
      {
        cw+=distance[i];
      } 
       return min(s,cw-s);
    }
};