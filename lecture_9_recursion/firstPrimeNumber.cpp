#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i =2; i <= sqrt(n); i ++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}
int firstPrime(int a[1001],int i, int n){
    if(i == n){
        return -1;
    }
    if(isPrime(a[i])){
        return i;
    }
    return firstPrime(a,i+1,n);
}

int main(){
int a[1001];
int n;
cin >> n;
for(int i =0; i <n; i++){
    cin >> a[i];
}
cout << firstPrime(a,0,n);

    return 0;
}