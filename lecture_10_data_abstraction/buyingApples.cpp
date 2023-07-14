#include<bits/stdc++.h>

using namespace std;

struct Apple
{
    int weight;
    int price;
};
void buyingApple(Apple apples[10000],int n){
    Apple apple_bought = apples[0];
    int index = 0;
    for(int i = 0; i < n; i ++){
        if(apples[i].weight > apple_bought.weight ){
            apple_bought = apples[i];
            index = i;
        }else if(apples[i].weight == apple_bought.weight && apples[i].price >= apple_bought.price){
            apple_bought = apples[i];
            index = i;
        }
    }
    cout << index;
}


int main(){
int n;
Apple apples[10000];
cin >> n;
for(int i = 0; i < n; i ++){
    cin >> apples[i].weight >> apples[i].price;
}
buyingApple(apples,n);

return 0;
}