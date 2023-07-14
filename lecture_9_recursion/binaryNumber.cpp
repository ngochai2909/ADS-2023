#include<bits/stdc++.h>
using namespace std;
unsigned long long  binaryNumber(unsigned long long   n){
    if(n == 0)
        return 0;
    return (n % 2 + 10 * binaryNumber(n / 2));
}


int main(){
    unsigned long long   n;
    cin >> n;
    cout << binaryNumber(n);
    return 0;
}