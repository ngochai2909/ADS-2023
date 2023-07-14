#include<bits/stdc++.h>
using namespace std;

struct employee{
    char code[6];
    char name[10];
    int yearOfBirth;
};
void oldestEmployee(employee staff[100], int n){
    employee oldestStaff = staff[0];
    for(int i = 0; i < n; i++){
        if(staff[i].yearOfBirth < oldestStaff.yearOfBirth || staff[i].yearOfBirth == oldestStaff.yearOfBirth&& strcmp(staff[i].code,oldestStaff.code) < 0 ){
            oldestStaff = staff[i];
        }
    }
    cout << oldestStaff.code <<" "<< oldestStaff.name <<" "<<oldestStaff.yearOfBirth;
    
}
int main(){
    int n;
    employee staff[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >>staff[i].code >> staff[i].name >> staff[i].yearOfBirth;
    }
    oldestEmployee(staff,n);
return 0;
}