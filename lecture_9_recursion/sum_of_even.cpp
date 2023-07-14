#include<bits/stdc++.h>
using namespace std;

int sumOfEven(int n, int a[1001]){
    if(n == 0){
        return 0;
    }
    if(a[n-1] % 2 == 0){
        return a[n-1] + sumOfEven(n-1, a);
    }else{
        return sumOfEven(n-1,a);
    }
   
}
    


int main(){
    int a [1001];
    int n;
    cin >> n;
    for(int i =0 ; i < n; i++){
        cin >> a[i];
    }
    cout << sumOfEven(n,a);
    return 0;
}