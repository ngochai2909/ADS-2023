#include<bits/stdc++.h>
using namespace std;

int palidromeNumber(int n){
    int ans = 0;
    while(n > 0){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
    if(palidromeNumber(n) ==n){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}