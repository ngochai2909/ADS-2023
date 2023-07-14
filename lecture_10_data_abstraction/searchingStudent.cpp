#include<bits/stdc++.h>
using namespace std;

struct Student{
    int studentId;
    double mathScore;
    double litScore;
};

int main(){

    int n;
    cin >> n;
    int n1;
    cin >> n1;
    Student s[100000];
    for(int i = 0; i < n; i ++){
        cin >> s[i].studentId >> s[i].mathScore >> s[i].litScore;
    }
    int search;
    for(int i = 0; i < n1 ; i ++ ){
        cin >> search;
        for(int i = 0; i < n; i++){
            if(search == s[i].studentId){
                cout << setprecision(1) << fixed;
            cout << s[i].mathScore <<" " << s[i].litScore <<endl;
        }
        }
    }
return 0;
}