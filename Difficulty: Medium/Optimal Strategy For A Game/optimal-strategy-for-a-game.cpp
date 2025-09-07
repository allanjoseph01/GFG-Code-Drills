class Solution {
  public:
  
    int maxScore(int l,int r,long long sum , vector<int>& arr, vector<vector<int>>& dp){
        if(dp[l][r]==-1){
            if(l==r){
                dp[l][r]=arr[l];
            }else{
                int left = sum-maxScore(l+1,r,sum-arr[l],arr,dp);
                int right = sum - maxScore(l,r-1,sum-arr[r],arr,dp);
                dp[l][r] = max(left,right);
            }
        }
        return dp[l][r];
    }
    int maximumAmount(vector<int> &arr) {
        // code here
        int siz= arr.size();
        long long sum=0;
        for(int i=0;i<siz;i++){
            sum+=arr[i];
        }
        vector<vector<int>> dp(siz,vector<int> (siz,-1));
        return maxScore(0,siz-1,sum,arr,dp);
    }
};