#include<bits/stdc++.h>
using namespace std;


void insertAsc(int a[],int index, int x){
while(index > 0){
    if(a[index-1] <= x){
        break;
    }
    a[index] = a[index - 1];
    index --;
}
    a[index] = x;
}
void sorted(int a[], int n){
    for(int i = 1; i < n; i ++){
        int x = a[i];
        int index = i;
        insertAsc(a,index,x);
    }
}
void print(int a[], int n){
    for(int i = 0; i < n; i ++){
        cout << a[i] <<" ";
    }
}

int main(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    sorted(a,n);
    print(a,n);
    return 0;

}