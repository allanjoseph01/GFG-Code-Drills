class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int siz=arr.size();
        for(int i=0;i<siz-1;i++){
            int j=i+1;
            int x=i;
            while(j>0 && arr[x]>arr[j]){
                int temp=arr[x];
                arr[x]=arr[j];
                arr[j]=temp;
                j--;
                x--;
            }
        }
        
    }
};