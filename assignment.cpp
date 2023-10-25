#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

bool ValidIdentifierChar(char c) {
    return isalnum(c) || c == '_';
}

bool ValidOperatorChar(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=' || c == '<' || c == '>';
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile) {
        cout << "Failed to open the input file";
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        string buffer;
        for (char c : line) {
            if (ValidIdentifierChar(c) || ValidOperatorChar(c) || isdigit(c) || c == '.') {
                buffer += c;
            } else if (!buffer.empty()) {
                if (isdigit(buffer[0]) || (buffer[0] == '.' && buffer.size() > 1)) {
                    if (isdigit(buffer[0]) || (buffer.size() > 1 && isdigit(buffer[1]))) {
                        cout << "Number: " << buffer << endl;
                    }
                } else {
                    if (ValidOperatorChar(buffer[0])) {
                        cout << "Operator: " << buffer << endl;
                    } else {
                        cout << "Identifier: " << buffer << endl;
                    }
                }
                buffer.clear();
            }
        }

        if (!buffer.empty()) {
            if (isdigit(buffer[0]) || (buffer[0] == '.' && buffer.size() > 1)) {
                cout << "Number: " << buffer << endl;
            } else if (ValidOperatorChar(buffer[0])) {
                cout << "Operator: " << buffer << endl;
            } else {
                cout << "Identifier: " << buffer << endl;
            }
        }
    }

    return 0;
}
