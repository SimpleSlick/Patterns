#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string rowContent = "";

        for (int j = 0; j < i; j++) {
            rowContent += to_string(i + j) + " ";
        }

        // Remove trailing space
        if (!rowContent.empty()) {
            rowContent.pop_back();
        }

        string lastRow = "";

        for (int j = 0; j < n; j++) {
            lastRow += to_string(n + j) + " ";
        }

        // Remove trailing space
        if (!lastRow.empty()) {
            lastRow.pop_back();
        }

        string spaces(lastRow.length() - rowContent.length(), ' ');

        cout << spaces << rowContent << endl;
    }

    return 0;
}