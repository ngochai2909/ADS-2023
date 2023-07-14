#include<bits/stdc++.h>
using namespace std;

void largesttNumber(int a){
    int max = -1;
    while (a > 0)
    {
        int x = a % 10;
        if(x > max){
            max = x;
        }
        a = a /10;
    }
    cout << max;
    
}


int main(){
    int n;
    cin >> n;
    largesttNumber(n);
    return 0;
}