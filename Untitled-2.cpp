#include <string.h>
#include <iostream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string jawaban;
    cout << "What is your Chinese ancestor's name?" << endl;
    getline(cin, jawaban);

    if (toLower(jawaban) == "yao chew you") {
        cout << "GMAIL" << endl << endl;
    } else {
        cout << "Incorrect answer. Please try again." << endl;
    }

    cout << "\nPress Enter to Exit...";
    cin.ignore(); // Ignore any leftover input
    cin.get();    // Wait for Enter key

    return 0;
}
