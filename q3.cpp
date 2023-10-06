#include <iostream>
using namespace std;

bool ValidIdentifier(const string& str) {

    if (str.empty() || isdigit(str[0])) {
        return false;
    }

    for (char ch : str) {
        if (!isalnum(ch) && ch != '_') {
            return false;
        }
    }

    return true;
}

int main() {
   string input;

   cout << "Enter a string: ";
   cin >> input;

   if (ValidIdentifier(input)) {
       cout << "The input is a valid identifier!" << endl;
   } else {
       cout << "The input is not a valid identifier." << endl;
   }

   return 0;
}
