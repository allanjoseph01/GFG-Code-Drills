class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0;
        int j=0;
        int n=arr.size();
        int ans=0,count=0;
        
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                count++;
                i++;
                ans = max(ans,count);
            }else{
                count--;
                j++;
            }
        }
        return ans;
    }
};
