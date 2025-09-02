class Solution {
  public:
    long long maxDiamonds(vector<int>& arr, int k) {
        // code here
        priority_queue<int> pq;
        int siz=arr.size();
        for(int i=0;i<siz;i++){
            pq.push(arr[i]);
        }
        long long sum=0;
        while(k--){
            sum+=pq.top();
            int n = pq.top();
            pq.pop();
            pq.push(n/2);
        }
        return sum;
    }
};