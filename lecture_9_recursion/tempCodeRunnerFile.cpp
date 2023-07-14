#include<bits/stdc++.h>
using namespace std;

int countNumber(int n){
    int count = 0;
    if(n < 10){
        return n;
    }
    return count + (n% 10) + countNumber(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << countNumber(n);

    return 0;
}