#include<bits/stdc++.h>
using namespace std;

int countNumber(char n[1001]){
    int count = 0;
    for(int i =0; i < strlen(n); i++){
        if('0' <= n[i] && n[i] <= '9'){
            count +=1;
        }
    }
    return count;
}
int main(){
    char s[1001];
    cin.getline(s,1001);
    cout << countNumber(s);
    return 0;
} 