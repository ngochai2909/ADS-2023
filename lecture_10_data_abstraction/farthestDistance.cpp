#include<bits/stdc++.h>
using namespace std;
struct coordinate{
    int x;
    int y;
};
double distance(coordinate a, coordinate b){
    double dis = sqrt((a.x - b.x) * (a.x - b.x) +(a.y -b.y) * (a.y -b.y));
    return dis;
}
void furthestDistance(coordinate x[100],int n, coordinate a){
    int maxX = x[0].x;
    int maxY = x[0].y;
    double maxDis = distance(a,x[0]);
    for(int i =0; i < n ; i++){
        if(distance(a,x[i]) > maxDis){
            maxDis = distance(a,x[i]);
             maxX = x[i].x;
             maxY = x[i].y;
    }
    
}
cout << maxX <<" " << maxY;
}

int main(){
coordinate origin;
cin >> origin.x >> origin.y;
int n;
cin >> n;
coordinate x[100];
for(int i = 0; i < n ; i++){
    cin >> x[i].x >> x[i].y;
}
furthestDistance(x,n,origin);
return 0;
}