#include<bits/stdc++.h>
using namespace std;

int largestGdc(int a, int b){
    if(a == b){
        return a;
    }
    if(a > b){
        return largestGdc(a-b,b);
    }else{
        return largestGdc(a,b-a);
    }
    
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << largestGdc(a,b);
return 0;
}