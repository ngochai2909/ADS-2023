#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
            
        }
    }
    return true;
}

int primeOnBorder(int a[10001][10001], int rows, int cols){
    int count = 0;
        for(int i = 0; i <= cols -1; i++){
            if(isPrime(a[0][i])== true){
                count += 1;
            }
    }
    for(int i = 0; i <= cols -1 ; i++){
            if(isPrime(a[rows - 1][i]) == true){
                count += 1;
            }
    }

    
    for(int i = 1; i <= rows - 2; i++){
        if(isPrime(a[i][0]) == true){
            count += 1;
        }
        if(isPrime(a[i][cols - 1]) == true){
            count += 1;
        }
    }
    return count;
}
int main(){
    int a[10001][10001];
    int rows, cols;
    cin >> rows >> cols;
    for(int i = 0; i < rows; i++){
        for(int j= 0; j < cols; j ++){
            cin >> a[i][j];
        }
    }
    cout << primeOnBorder(a, rows, cols);
    return 0;
}