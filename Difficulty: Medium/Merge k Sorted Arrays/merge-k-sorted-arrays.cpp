// User function Template for C++

class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>>& arr, int K) {
        // code here
        vector<int> ans;
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<K;i++){
            pq.push({(-1)*arr[i][0],{i,0}});
        }
        int ele = K*K;
        while(ele--){
            ans.push_back((pq.top().first) * (-1));
            int i = pq.top().second.first;
            int j = pq.top().second.second;
            pq.pop();
            if(j+1<K){
                pq.push({(-1)*arr[i][j+1],{i,j+1}});
            }
        }
        return ans;
    }
};