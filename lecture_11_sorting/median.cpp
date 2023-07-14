#include<bits/stdc++.h>
using namespace std;

void merge(int L[], int n1, int R[], int n2, int a[], int n){
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
    int L[10000];
    int R[10000];
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
        merge(L, n1, R, n2, a, n);
    }
    
}

void median(int a[], int n){
        if(n % 2 == 0){
             cout << setprecision(2) << fixed <<  (a[n/2] + a[n/2 -1]) / 2;
        }else{
             cout << a[n /2];
        }
}

int main(){
    int n;
    cin >> n;
    int a[10001];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    mergeSort(a,n);
    median(a,n);
    return 0;
}