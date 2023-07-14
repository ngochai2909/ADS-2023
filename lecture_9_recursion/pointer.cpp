#include<bits/stdc++.h>
using namespace std;



int main(){

int a = 3;
int *pa = &a;
pa = new int;
if(pa != NULL){
    *pa = 5;
}
delete pa;
cout << pa;
    return 0;
}