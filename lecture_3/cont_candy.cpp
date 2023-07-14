#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x ;
    cin >> n;
    int count = 0;
    for(int i =0; i < n; i++){
        cin >> x;
        if(x % 2 == 0){
            count += 1;
        }
    }
    if(count == n){
        cout << "YES";
    }else{
        cout <<"NO";
    }
    return 0;
}