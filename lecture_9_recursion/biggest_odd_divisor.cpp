#include<bits/stdc++.h>
using namespace std;

int biggestOddDivisor(int n){
    if(n % 2 != 0){
        return n;
    }
    return biggestOddDivisor(n/2);
}

int main(){
    int n;
    cin >> n;
    cout << biggestOddDivisor(n);

    return 0;
}