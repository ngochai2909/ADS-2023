#include<bits/stdc++.h>
using namespace std;

void splitNumber(int a){
    int count = 0;
    while (a > 0)
    {
        a % 10;
        a = a /10;
        count += 1;
    }
    cout << count;
}


int main(){
    int n;
    cin >> n;
    splitNumber(n);
    return 0;
}