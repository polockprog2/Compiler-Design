#include <iostream>
using namespace std;

bool checkNumber(const string s) {
    for (char c : s) {
        if ( c != '.' && c != '-' && c != '+') {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter an input string: ";
    cin >> input;

    if (checkNumber(input)) {
        cout << input<<" " << " It's a valid number." << endl;
    } else {
        cout <<  input<<" " << "It's a valid number." << endl;
    }

    return 0;
}
