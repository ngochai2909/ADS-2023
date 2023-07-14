#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i =2 ; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int countPrimeOnDiagonal(int a[101][101], int n){
    int count = 0;
    for(int i =0 ; i < n; i++){
        if(isPrime(a[i][i]) ){
            count += 1;
        }
    }
    return count;
}

int main(){
    int a[101][101];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j ++){
            cin >> a[i][j];
        }
    }
    cout << countPrimeOnDiagonal(a,n);

    return 0;
}