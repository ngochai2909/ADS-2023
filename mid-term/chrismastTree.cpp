#include <bits/stdc++.h>
using namespace std;
void printSpaces(int numberOfSpace) {
    for (int i = 0; i < numberOfSpace; i++) {
        cout << " ";
    }
}

void printStars(int numberOfStar) {
    for (int i = 0; i < numberOfStar; i++) {
        cout << "*";
    }
}

void printChristmasTree(int height) {
    int numberOfSpace = height - 1;
    int numberOfStar = 1;

    for (int i = 0; i < height; i++) {
        printSpaces(numberOfSpace);
        printStars(numberOfStar);

        cout << endl;

        numberOfSpace--;
        numberOfStar += 2;
    }

   
}

int main() {
    int height;
    cin >> height;

    printChristmasTree(height);

    return 0;
}
