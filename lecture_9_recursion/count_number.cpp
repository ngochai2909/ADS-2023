#include<bits/stdc++.h>
using namespace std;


int countNumber(int n){
    if(n < 0){
        n *= -1;
    } // hoặc bỏ dòng này đi và thay bằng abs(n) < 10
    if(n < 10){
        return 1;
    }
    return  1 + countNumber(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << countNumber(n);

    return 0;
}