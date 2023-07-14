#include<bits/stdc++.h>
using namespace std;
int calFare(int n){
    int Fare = 0;
    int Fare_1 =0;
    if(n <= 1){
     Fare = 15000;
    }
    else if(n > 1 && n <= 5){
        Fare = 15000 + 13500 *(n-1);
    }else if(n > 5 && n < 12) {
        Fare = 15000 + 13500 * 4 + 11000 *(n-5);
    }else if(n >= 12){
        Fare_1 = 15000 + 13500 * 4 + 11000 * (n-5) - Fare *0.1;
        Fare = Fare_1 - (Fare_1 *10)/100;
    }
    return Fare;
}

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << calFare(n); 
    return 0;
}