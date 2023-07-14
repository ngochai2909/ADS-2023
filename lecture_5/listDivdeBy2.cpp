#include <iostream>
using namespace std;

void input(int a[1001], int &n ){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void divide(int a[1001], int n){
    for(int i =0; i < n; i ++){
        if(a[i] % 2 == 0 ){
            cout << a[i] << endl;
        }
    }
}

int main(){
    int a[100];
    int n = 0;
    input(a,n);
    divide(a,n);
    return 0;
}
