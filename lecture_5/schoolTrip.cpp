#include<bits/stdc++.h>
using namespace std;

void input(int a[101],int &n){
    cin >> n;
    for(int i = 0; i <= n; i ++){
        cin >>a[i];
    }
}
void countStudent(int a[101],int n){
    int count_boy = 0;
    int count_girl =0;
    for(int i =0; i <= n; i ++){
        if(a[i] == 0){
            count_boy +=1;
        }else if(a[i] == 1){
            count_girl += 1;
        }
    }
    if(count_boy == count_girl){
            cout << "YES";
    }else{
            cout << "NO";
        }
}
int main(){
    int a[101];
    int n = 0;
    input(a,n);
    countStudent(a,n);
    return 0;
}