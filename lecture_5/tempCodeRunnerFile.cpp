int min(int n){
    int a[1001];
    int min = 0;
    for(int i = 0; i < n; i ++){
        if(a[i +1]< a[i]){
            min = a[i+1];
        }
    }
    return min;
}