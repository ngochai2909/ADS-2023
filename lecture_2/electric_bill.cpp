#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, x2;
    cin >> x1 >> x2;
    int tien_dien = 0;
    int tien_dien_phai_tra = 0;
    int so_dien = x2 - x1;
    if(so_dien <= 50){
        tien_dien = so_dien * 1484;
    }
    else if(so_dien <= 100){
        tien_dien = 50 * 1484 + (so_dien - 50) * 1533;
    }else if(so_dien <= 200){
        tien_dien = 50 * 1484 + 50 * 1533 + (so_dien - 100) * 1786 ;
    }
    else if(so_dien <= 300){
        tien_dien =50 * 1484 + 50 * 1533 + 100 * 1786 +( so_dien - 200) * 2242;
    }else if(so_dien <= 400){
        tien_dien = 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + (so_dien - 300) *2503;
    }else {
        tien_dien = 50 * 1484 + 50 * 1533 + 100 * 1786 + 100 * 2242 + 100 * 2503 +  (so_dien - 400) *2587;
    }
    tien_dien_phai_tra = tien_dien + (10 * tien_dien )/100;
    cout << tien_dien_phai_tra;
    return 0;
}