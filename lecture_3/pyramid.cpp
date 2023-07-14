#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max =0;
    int sum =0;
    for(int i =1; i <= n;i++){
        sum += i;
        if((n - sum) >= 0){
            max +=1;
        }
        n = n- sum;
    }
    cout << max;

    return 0;
}