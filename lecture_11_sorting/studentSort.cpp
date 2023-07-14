#include<bits/stdc++.h>
using namespace std;

struct Student{
    int student_code;
    double score;
};

void merge(Student L[], int n1, Student R[], int n2, Student a[]){
    int i,j,k ;
    i = j = k = 0;
    while (i < n1 && j < n2){
        if(L[i].score > R[j].score || (L[i].score ==  R[j].score && L[i].student_code < R[j].student_code)){
            a[k] = L[i];
            i ++;
        }else {
            a[k] = R[j];
            j ++;
        }
        k ++;
    }
    while(i < n1){
        a[k] = L[i];
        k ++;
        i ++;
    }
    while(j < n2){
        a[k] = R[j];
        k ++;
        j ++;
    }
}
void mergeSort(Student a[], int n){
    Student L[10000];
    Student R[10000];
    if(n > 1){
        int n1 = n /2;
        int n2 = n - n1;
        for(int i = 0; i < n1; i ++){
            L[i] = a[i];
        }
        for(int i = 0; i < n2; i ++){
            R[i] = a[i + n1];
            
        }
        mergeSort(L, n1);
        mergeSort(R, n2);
        merge(L, n1, R, n2, a);
    }
    
}




int main(){
    int n, k;
    cin >>n >> k;
    Student students[10001];
    for(int i = 0; i < n; i ++){
        cin >> students[i].student_code >>students[i].score;
    }
    mergeSort(students, n);
    
    for(int i = 0; i < k; i ++){
        cout << students[i].student_code << endl;
    }
    return 0;
}