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
    int L[1000];
    int R[1000];
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
void reverseArray(int a[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int odd_index = 0;
    int even_index = 0;
    int odd[1001];
    int even[1001];
    for(int i = 0; i < n ; i ++){
        if(a[i] % 2 == 0){
            even[even_index] = a[i];
            even_index ++;
        }else{
            odd[odd_index] = a[i];
            odd_index ++;
        }
    }
    mergeSort(odd, odd_index);
    reverseArray(odd, odd_index);
    mergeSort(even, even_index);
    int index_even = 0;
    int index_odd = 0;
    for(int i = 0; i < n; i ++){
        if(a[i] % 2 == 0){
            a[i] = even[index_even];
            index_even ++;         
        }else{
            a[i] = odd[index_odd];
            index_odd ++;
        }
    }
    for(int i = 0 ; i < n; i ++){
        cout << a[i] <<  " ";
    }
    return 0;
} 