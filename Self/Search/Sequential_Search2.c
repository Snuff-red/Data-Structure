int Sequential_Search(int *a,int n,int key){
    int i;
    a[0]=key;
    i=0;
    while(a[i]!=key){
        i--;
    }
    return i;
}