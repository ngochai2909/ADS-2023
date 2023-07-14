#include <bits/stdc++.h>
using namespace std;

void input(int a[1001], int &n ){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
int min(int a[1001],int n){
    int min = 99999;
    for(int i = 0; i < n; i ++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}
int pruningFlower(int a[1001], int n){
    int energy = 0;
    for(int i = 0; i < n; i ++){
            energy = energy + (a[i] - min(a,n));
    }
    return energy;
}

int main(){
    int a[1001];
    int n = 0;
    input(a,n);
    cout << pruningFlower(a,n);
    return 0;
}
