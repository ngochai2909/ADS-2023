#include <iostream>   
using namespace std;  
int n;  
int arr[1004];  
  
bool inArray(int k, int arr[]) {  
    for (int i = 0; i < n; i++) {  
        if (arr[i] == k) {  
            return true;  
        }  
    }  
    return false;  
}  
  
int main() {  
    cin >> n;  
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  
    }  
    int ans = 1;  
    while (true) {  
        if (inArray(ans, arr)) {  
            ans += 1;  
        }  
        else {  
            cout << ans;  
            return 0;  
        }  
    }  
    return 0;  
} 