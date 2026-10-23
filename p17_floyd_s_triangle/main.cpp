#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 4;
    int counter = 1;

    for (int i = 1; i <= n; i++) {
        string row = "";

        for (int j = 1; j <= i; j++) {
            row += " " + to_string(counter);
            counter++;
        }

        cout << row << endl;
    }

    return 0;
}