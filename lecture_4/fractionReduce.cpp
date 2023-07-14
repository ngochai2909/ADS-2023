#include<bits/stdc++.h>
using namespace std;
int fraction(int a, int b){
    while (a !=b)
    {
        if(a > b){
            a = a -b;
        }else{
            b = b-a;
        }
    }
    return a;
}
void reduceFraction(int &a, int &b){
    int numerator = a/fraction(a,b);
    int denomirator = b / fraction(a,b);
    cout << numerator << " "<<denomirator;
}
int main(){
    int a,b;
    cin >> a >> b;
    reduceFraction(a,b);
    return 0;
}