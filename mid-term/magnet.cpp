#include <iostream>
using namespace std;

int countMagnetGroups(char magnets[][2], int n) {
    int count = 1;  
    for (int i = 1; i < n; i++) {
        if (magnets[i][0] != magnets[i - 1][0] || magnets[i][1] != magnets[i - 1][1]) {
            count++; 
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    char magnets[n][2];
    for (int i = 0; i < n; i++) {
        cin >> magnets[i][0] >> magnets[i][1];
    }

    cout << countMagnetGroups(magnets, n);

    return 0;
}
