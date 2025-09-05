// User function Template for C++

class Solution {
  public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        priority_queue<
            pair<pair<int,int>,int>, 
            vector<pair<pair<int,int>,int>>, 
            greater<pair<pair<int,int>,int>>
        > pq;
        for(int i=0;i<N;i++){
            pq.push({{F[i],S[i]},i+1});
        }
        vector<int> ans;
        int end_time =-1;
        while(!pq.empty()){
            int st = pq.top().first.second;
            int ed= pq.top().first.first;
            int num= pq.top().second;
            pq.pop();
            if(st>end_time){
                ans.push_back(num);
                end_time = ed;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};