#include<bits/stdc++.h>
using namespace std;

void checkApperance(char n[1001]){
    bool flag = true;
    for(int i =0; i < strlen(n);i++){
        n[i]=toupper(n[i]);
        if(n[i] == 'B' || n[i] == 'I'||n[i] == 'O'||n[i] == 'G'){
            flag = true;
            break;
        }else{
            flag = false;
        }
    }
    if(flag == true){
        cout <<"YES";
    }else{
        cout <<"NO";
    }
}

int main(){
char n[1001];
cin.getline(n,1001);
checkApperance(n);
    return 0;
}