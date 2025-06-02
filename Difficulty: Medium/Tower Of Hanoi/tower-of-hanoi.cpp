class Solution {
  public:
    // You need to complete this function

    int towerOfHanoi(int n, int from, int to, int aux) {
        // Your code here
        if(n==0){
            return 0;
        }
        int ans=0;
        ans+=towerOfHanoi(n-1,from,aux,to);
        ans+=1;
        ans+=towerOfHanoi(n-1,aux,to,from);
        return ans;
    }
};