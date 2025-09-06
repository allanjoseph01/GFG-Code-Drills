// User function template for C++

// arr : given array
// n : size of arr
// index : need to update
// new_val : given value to which we need to update index
// st : constructed segment-tree

// Function to update a value in input array and segment tree.
void updateUtil(ll *st,int si, int ss, int se, int idx, int diff){
    if(idx<ss || idx>se){
        return ;
    }
    st[si]+=diff;
    if(ss!=se){
        int m = (ss+se)/2;
        updateUtil(st,(si*2)+1 , ss, m , idx ,diff);
        updateUtil(st,(si*2)+2 , m+1,se , idx ,diff);
    }
}
void updateValue(int *arr, ll *st, int n, int index, int new_val) {
    // add code here
    int diff = new_val-arr[index];
    arr[index]=new_val;
    updateUtil(st,0,0,n-1,index,diff);
}

// Function to return sum of elements in range from index qs (query start)
// to qe (query end).
ll sumUtil(ll *st , int ss,int se , int qs, int qe , int si){
    // Case 1: No overlap
    if (qe < ss || qs > se) return 0;

    // Case 2: Total overlap
    if (qs <= ss && se <= qe) return st[si];
    int m=(ss+se)/2;
    return sumUtil(st,ss,m,qs,qe,(si*2)+1) + sumUtil(st,m+1,se,qs,qe,(si*2)+2);;
}
ll getsum(ll *st, int n, int l, int r) {
    // add code here
    return sumUtil(st,0,n-1,l,r,0);
}
