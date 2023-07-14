#include <iostream>   
using namespace std;  
int n;   
int a[1001], b[1001];
int pickFruit(int a[1001],int b[1001], int n){
    int id =0;
    for(int i = 1; i < n; i++){
        if(a[id] < a[i] || (a[id] == a[i] && b[i] > b[id])){
            id = i;
        }
    
    }return id + 1;
}

int main() {  
    cin >> n;  
    for(int i =0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    cout << pickFruit(a,b,n);
    
    return 0;  
} 