#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int max = 0;
    bool flag = true;
    while(true){
    cin >> x;
    if(x == 0){
        break;
    }
    else if(x > max){
        max = x;
    }
    else if(x < max ){
        flag = false;
    }
    }
    if( flag == true){// TRONG BIỂU THỨC IF LUÔN DÙNG 2 DẤU BẰNG, NẾU DÙNG 1 DẤU = SẼ HIỂU LÀ GÁN 
        cout<<"YES";
    }else if(flag == false){
        cout<<"NO";
    }
    return 0;
}