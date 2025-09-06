/* The functions which
builds the segment tree */
vector<int> tree;
void build(int ss,int se , int si , int arr[]){
    if(ss==se){
        tree[si] = arr[ss];
        return ;
    }
    int m = (ss+se)/2;
    build(ss,m,(si*2)+1,arr);
    build(m+1,se,(si*2)+2,arr);
    tree[si] = min(tree[(si*2)+1] , tree[(si*2)+2]);
}
int *constructST(int arr[], int n) {
    // Your code here
    tree.resize((4*n) + 1);
    build(0,n-1,0,arr);
    return tree.data();
}

/* The functions returns the
 min element in the range
 from a and b */
int minUtil(vector<int>& tree,int ss,int se, int qs,int qe,int si){
    if(qe<ss || qs>se){
        return INT_MAX;
    }
    if(qs<=ss && se<=qe){
        return tree[si];
    }
    int m=(ss+se)/2;
    return min(minUtil(tree,ss,m,qs,qe,(si*2)+1) , minUtil(tree,m+1,se,qs,qe,(si*2)+2));
}

int RMQ(int st[], int n, int a, int b) {
    // Your code here
    return minUtil(tree,0,n-1,a,b,0);
}