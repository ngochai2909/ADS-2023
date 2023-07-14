#include<bits/stdc++.h>
using namespace std;


int firstDigit(int n){
    if(n < 0){
        n *= -1;
    } 
    if(n < 10){
        return n;
    }
    return  firstDigit(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << firstDigit(n);

    return 0;
}