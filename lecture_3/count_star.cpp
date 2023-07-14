#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int count = 0;
    do
    {
        cin >> x;
        if(x == 5 ){
            count += 1;
        }
    } while (x > 0);
    
    cout << count;

    return 0;
}