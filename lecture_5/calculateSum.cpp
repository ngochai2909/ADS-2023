#include <iostream>
using namespace std;

void inputArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

int calSum(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int a[1001];
    int n;
    cin >> n;
    inputArray(a, n);
    cout << calSum(a, n);
    return 0;
}
