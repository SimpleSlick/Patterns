#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 5;

    // Top portion
    for (int i = 1; i <= n; i++) {
        string spaces(n - i, ' ');
        string stars;

        for (int j = 1; j <= i; j++) {
            stars += "* ";
        }

        cout << spaces << stars << endl;
    }

    // Bottom portion
    for (int i = n - 1; i >= 1; i--) {
        string spaces(n - i, ' ');
        string stars;

        for (int j = 1; j <= i; j++) {
            stars += "* ";
        }

        cout << spaces << stars << endl;
    }

    return 0;
}