#include<bits/stdc++.h>
using namespace std;

int largestDigit(int n){
    int a = abs(n % 10);
    if(abs(n) < 10 ){
        return n;
    }
    int max = largestDigit(abs(n/10));
    if(a > max){
        return a;
    }else{
        return max;
    }
    
}

int main(){
    int n;
    cin >> n;
    cout << largestDigit(n);
    return 0;
}