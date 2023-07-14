#include <bits/stdc++.h>
using namespace std;

void input(int a[1001], int &n ){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
bool isPrime(int n ){
    if(n <= 1){
        return false;
    }else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}
int countPrime(int a[1001], int n){
    int count = 0;
    for(int i = 0; i < n; i ++){
        if(isPrime(a[i]) == true){
            count +=1;
        }
    }
    return count;
}

int main(){
    int a[1001];
    int n = 0;
    input(a,n);
    cout << countPrime(a,n);
    return 0;
}
