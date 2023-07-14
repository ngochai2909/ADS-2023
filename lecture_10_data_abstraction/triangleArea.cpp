#include<bits/stdc++.h>
using namespace std;

struct triangle{
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
};

double area(triangle x){
    double side_1 = sqrt((x.x1 - x.x2) * (x.x1 - x.x2) +(x.y1 -x.y2) * (x.y1 -x.y2));
    double side_2 = sqrt((x.x2 - x.x3) * (x.x2 - x.x3) +(x.y2 -x.y3) * (x.y2 -x.y3));
    double side_3 = sqrt((x.x3 - x.x1) * (x.x3 - x.x1) +(x.y3 -x.y1) * (x.y3 -x.y1));
    double s = (side_1 + side_2 + side_3) / 2;
    double areaTriagnle = sqrt(s * (s-side_1 )*(s-side_2) *(s-side_3));
    return areaTriagnle;
}


int main(){
    int n;
    cin >> n;
    triangle x[1000];
    for(int i = 0; i < n; i++){
        cin >> x[i].x1 >> x[i].y1;
        cin >> x[i].x2 >> x[i].y2;
        cin >> x[i].x3 >> x[i].y3;
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += area(x[i]);
    }
    cout << setprecision(2) << fixed <<sum;
    return 0;
}