#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string row = "";

        for (int j = 0; j < i; j++) {
            row += to_string(i + j) + " ";
        }

        // Remove the last space
        if (!row.empty())
            row.pop_back();

        cout << row << endl;
    }

    return 0;
}