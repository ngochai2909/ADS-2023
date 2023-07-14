#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100][100];
    int rows, cols;
    cin >> rows >> cols;
    for (int  i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        int sum =0;
        for(int j =0; j < cols; j ++){
            sum += a[i][j];
        }
        cout <<i <<": "<<sum<< endl;
    }
    
    return 0;
}