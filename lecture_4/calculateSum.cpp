#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum =0;
    for(int i = 0; i <= n; i++ ){
        sum += i *i;
    }
    return sum;
}

int main(){
    int n ;
    cin >> n;
    cout << sum(n);
    return 0;
}