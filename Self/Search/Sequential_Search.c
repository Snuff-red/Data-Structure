int Sequential_Search(int *a,int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0;
}