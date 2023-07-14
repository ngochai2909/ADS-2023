#include<bits/stdc++.h>
using namespace std;

void merge(int L[], int n1, int R[], int n2, int a[]){
    int i,j,k ;
    i = j = k = 0;
    while (i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i ++;
        }else {
            a[k] = R[j];
            j ++;
        }
        k ++;
    }
    while(i < n1){
        a[k] = L[i];
        k ++;
        i ++;
    }
    while(j < n2){
        a[k] = R[j];
        k ++;
        j ++;
    }
}
void mergeSort(int a[], int n){
    int L[1000000];
    int R[1000000];
    if(n > 1){
        int n1 = n /2;
        int n2 = n - n1;
        for(int i = 0; i < n1; i ++){
            L[i] = a[i];
        }
        for(int i = 0; i < n2; i ++){
            R[i] = a[i + n1];
            
        }
        mergeSort(L, n1);
        mergeSort(R, n2);
        merge(L, n1, R, n2, a);
    }
    
}

int main(){
    int n1,n2, k;
    cin >> n1 >> n2 >> k;
    int a[100000];
    int b[100000];
    int c[1000100];
    int n3 = n1 +n2;
    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }
    merge(a,n1,b,n2,c);
    mergeSort(c,n3);
    cout << c[k];
    // for(int i = 0; i < n3; i ++){
    //     cout << c[i];
    // }
    return 0;
}