#include <iostream>   
using namespace std;  
int n;   
int a[1001];
void countHour(int a[1001], int n){
    bool good = true;
    if(a[n-1] == 0){
        good == false;
            
    }else {
        for(int i  =0; i < n-3; i++){
         if (a[i] == a[i+1] && a[i+1] == a[i+2] && a[i+2] == a[i+3] && a[i] == 0 && a[i+1] == 0 && a[i+2] == 0) {
            good == false;
            break;
        }
    }
}
    
    if(good == true){
        cout <<"YES";
    }else{
        cout << "NO";
    }
}


int main() {  
    cin >> n;  
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    countHour(a,n);
    
    return 0;  
} 