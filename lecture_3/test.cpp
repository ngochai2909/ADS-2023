#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max =0;
    int sum =0;
    int sum2 = 0;
    for(int i =1; i <=n ; i++){
        for(int j =1; j <= i; j ++){
             sum2 += j + (j-1);
        }
        
    cout << sum2;
    
}
return 0;
}