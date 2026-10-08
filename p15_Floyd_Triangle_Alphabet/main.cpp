#include <iostream>
#include <string>

using namespace std;

int main() {

    int n = 5;
    int charCode = 65; // Starting character 'A'

    for (int i = 1; i <= n; i++) {

        string row = "";

        for (int j = 1; j <= i; j++) {

            row += char(charCode);
            row += " ";

            charCode++;
        }

        // Remove last space
        if (!row.empty()) {
            row.pop_back();
        }

        cout << row << endl;
    }

    return 0;
}