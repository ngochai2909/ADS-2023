#include <iostream>
using namespace std;

void input(int a[1001], int &n ){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

bool numberOfLike(int a[1001], int n){
    for(int i =0; i < n; i ++){
        if(a[i] == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int a[1001];
    int n = 0;
    input(a,n);
    if(numberOfLike(a,n) == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
