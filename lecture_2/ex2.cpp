#include<bits/stdc++.h>
using namespace std;
int main(){
    double a, b;
    cin >>a >> b;
    if(a > 0 && b > 0){
        cout << "cung dau";
    }else if (a < 0 && b < 0){
        cout << " cung dau";
    }
    else{ 
        cout<<" trai dau";}     
    return 0;
}