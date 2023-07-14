#include<bits/stdc++.h>
using namespace std;
int main(){
   int a, b,c,d;
   cin >> a >> b >> c >> d;
   if(a >= b && b >= c && c >= d){
    cout << a;
   }
   else if( b >= c && c >= d ){
    cout << b;
   }
   else if(c >= d ){
    cout << c;
   }else{
    cout << d;
   }
    return 0;
}