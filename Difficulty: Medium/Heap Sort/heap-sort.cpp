// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int j=n-1;j>=0;j--){
            int i=j;
            while((2*i)+1<n){
                int mini = (2*i)+1;
                if((2*i)+2<n && arr[(2*i)+2]<arr[mini]){
                    mini = (2*i)+2;
                }
                if(arr[i]>arr[mini]){
                    swap(arr[i],arr[mini]);
                    i=mini;
                }else{
                    break;
                }
            }
        }
        int m=n;
        while(m>1){
            swap(arr[0],arr[m-1]);
            m=m-1;
            int i=0;
            while((2*i)+1<m){
                int mini = (2*i)+1;
                if((2*i)+2<m && arr[(2*i)+2]<arr[mini]){
                    mini = (2*i)+2;
                }
                if(arr[i]>arr[mini]){
                    swap(arr[i],arr[mini]);
                    i=mini;
                }else{
                    break;
                }
            }
        }
        int i=0,j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};