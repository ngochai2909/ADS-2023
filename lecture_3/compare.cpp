#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
  	int max = -1;
  	int min =11;
    while(true){
        cin >> x;
        if( x == -1){
            break;
        }else if(x < min && x > max){
            min = x;
            max = x;
        }else if(x < min){
            min = x;
        }else if( x > max){
            max = x;
        }
    }

    cout << max << " "<<min;

    return 0;
}