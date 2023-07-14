#include <bits/stdc++.h>
using namespace std;

string getUpperName(const string &songName) {
    string upperName = "";

    if (!songName.empty()) {
        upperName += toupper(songName[0]);

        for (int i = 1; i < songName.length(); i++) {
            if (songName[i] == ' ') {
                upperName += toupper(songName[i + 1]);
            }
        }
    }

    return upperName;
}

int main() {
    string songName;
    getline(cin, songName);

    string upperName = getUpperName(songName);
    cout << upperName << endl;

    return 0;
}
