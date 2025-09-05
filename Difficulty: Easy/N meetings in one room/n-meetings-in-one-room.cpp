class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        priority_queue<pair<int,int>> pq;
        int siz=start.size();
        for(int i=0;i<siz;i++){
            pq.push({(-1)*end[i],(-1)*start[i]});
        }
        int count=1;
        int end_time = pq.top().first * (-1);
        pq.pop();
        while(siz--){
            int st = pq.top().second *(-1);
            int ed= pq.top().first*(-1);
            pq.pop();
            if(st>end_time){
                count++;
                end_time = ed;
            }
        }
        return count;
    }
};