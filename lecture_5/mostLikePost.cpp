#include <iostream>
using namespace std;

int mostLike(int a[10001], int n){
    int max = -1;
    for(int i =0; i < n; i ++){
        if(a[i] > max ){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int a[10001];
    int n;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    cout << mostLike(a,n);
    return 0;
}
