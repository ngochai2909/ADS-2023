#include<bits/stdc++.h>
using namespace std;

void negativeColumn(int a[1001][1001], int rows, int cols){
    bool flag = true;
    for(int i=0; i < cols; i++){
        for(int j=0; j < rows; j ++){
            if(a[j][i] >= 0){
                flag = false;
                break;
            }else{
                flag = true;
            }
        }
        if(flag == true){
            cout << i<<" ";
        }
    }
}

int main(){
    int a[1001][1001];
    int rows,cols;
    cin >> rows >> cols;
    for(int i = 0; i < rows; i ++){
        for(int j =0; j < cols; j ++){
            cin >> a[i][j];
        }
    }
    negativeColumn(a,rows,cols);
    return 0;
}