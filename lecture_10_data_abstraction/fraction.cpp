#include<bits/stdc++.h>
using namespace std;

struct fraction{
    int num;
    int denom;

};
int gdc(int a, int b){
    if(a == b){
        return a; 
    }
    if(a > b){
        return gdc(a-b,b);
    }else{
        return gdc(a,b-a);
    }
}
void reduceFraction(fraction &p){
    if(p.num == 0){
        p.denom =1;
    }
    int x = gdc(abs(p.num), abs(p.denom));
    p.num = p.num / x;
    p.denom = p.denom / x;
    if(p.num == p.denom){
        cout << 1 << " ";
    }else if (p.denom == 1){
        cout << p.num;
        }
        else{
        cout << p.num << " " << p.denom;
    }
}
fraction sumFraction(fraction p1, fraction p2){
    fraction p3;
    p3.num = p1.num * p2.denom + p1.denom * p2.num;
    p3.denom = p1.denom * p2.denom ;
    reduceFraction(p3);
    return p3;
}

int main(){
fraction p1;
fraction p2;
fraction p3;
cin >> p1.num >> p1.denom;
cin >>  p2.num >> p2.denom;
p3 = sumFraction(p1,p2);

return 0;
}