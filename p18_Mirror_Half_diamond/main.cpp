#include <iostream>
#include <string>
using namespace std;

int main() {

    int n = 5;

    // Top portion
    for (int i = 1; i <= n; i++) {
        string spaces = string(n - i, ' ');
        string stars = string(i, '*');

        cout << spaces + stars << endl;
    }

    // Bottom portion
    for (int i = n - 1; i >= 1; i--) {
        string spaces = string(n - i, ' ');
        string stars = string(i, '*');

        cout << spaces + stars << endl;
    }

    return 0;
}