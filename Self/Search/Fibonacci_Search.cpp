//F为Fibonacci数列，数据结构为int型的数组
int F={0,1,1,2,3,5,8,13,21};
int Fibonacci(int *a,int n,int key){
    int low,high,mid,i,k;
    low=1;
    high=n;
    k=0;
    while(n>F[k]-1){
        k++;
    }
    for(i=n;i<F[k]-1;i++){
        a[i]=a[n];
    }
    while(low<=high){
        mid=low+F[k-1]-1;
        if(key<mid){
            high=mid-1;
            k=k-1;
        }
        else if(key>mid){
            low=mid+1;
            k=k-2;
        }
        else if(mid<=n){
            return mid;
        }
        else(mid>n){
            return n;
        }
    }
    return 0;
}