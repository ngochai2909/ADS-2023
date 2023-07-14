#include<bits/stdc++.h>
using namespace std;
int main(){
   int n ;
   cin >>n;
   bool flag = true;
   for(int i = 2; i <= n-1; i++){
    if(n % i == 0 ){
        flag = false;
    }
   }

   if(flag == true){
    cout << "YES";
   }else{
    cout << "NO";
   }

    return 0;
}