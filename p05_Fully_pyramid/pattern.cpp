#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string spaces(n - i, ' ');
        string stars = "";

        for (int j = 0; j < i; j++) {
            stars += "* ";
        }

        cout << spaces << stars << endl;
    }

    return 0;
}