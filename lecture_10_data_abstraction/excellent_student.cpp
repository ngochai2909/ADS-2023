#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    float math;
    float writing;
};
float  gpa(student a){
    float average = (a.math + a.writing)/2;
    return average;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    student S[100];
    for (int i = 0 ; i < n ; i ++){
        getline(cin,S[i].name);
        cin >> S[i].math >> S[i].writing;
        cin.ignore();
    }
    int ans = 0;
    for(int i = 0; i < n; i ++){
        if(gpa(S[i]) >= 9.0){
            ans +=1;
        }
    }
    cout << ans;
    return 0;
}