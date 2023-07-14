#include<bits/stdc++.h>
using namespace std;

struct subject {
    double score = 0;
    int etcs = 0 ;
};

double gpa(subject s) {

    double gpa;
    gpa =  (s.score * s.etcs)/60;
    return gpa;
}

//"Project Management", "France", "Numerical_Method", "Prob", "Signal_System", "DSA", "OOP", "Database", "Operating_System","Advanced_Python", "Algebraic_Structure", "Computer_Network","Software_Engineering", "Computational", "Digital_Signal_Processing", "Software_Testing", "Image_Processing", "Mobile_Wireless"
int main() {
    
    subject B2[100];
    string subjects[100] ={"Project Management", "France_1","France_2", "Numerical_Method", "Prob", "Signal_System", "DSA", "OOP", "Database", "Operating_System","Advanced_Python", "Algebraic_Structure", "Computer_Network","Software_Engineering", "Computational",
                     "Digital_Signal_Processing", "Software_Testing", "Image_Processing", "Mobile_Wireless"
                    };
                    
    double sum = 0;
    for(int i =0; i < 19; i++){
        cout << "nhap diem mon hoc va tin chi: "<< subjects[i]<< endl;
        cin >> B2[i].score >> B2[i].etcs;
        sum += gpa(B2[i]);
    }
    cout << sum << endl;
    system("pause");
    return 0;
}
