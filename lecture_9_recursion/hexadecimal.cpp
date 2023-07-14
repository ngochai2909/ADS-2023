#include <iostream>
#include <string>
using namespace std;

string decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        return "0";
    }
    string hexadecimal = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        char digit;
        if (remainder < 10) {
            digit = remainder + '0';
        } else {
            digit = remainder - 10 + 'A';
        }
        hexadecimal = digit + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal;
}


int main() {
    int decimalNumber;
    cin >> decimalNumber;
    cout << decimalToHexadecimal(decimalNumber);
    return 0;
}
