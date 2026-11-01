#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 5;

    for (int i = 1; i <= n; i++){
        string row = "";

        string spaces = "";

        for (int k = 1; k <= n - i; k++){
            spaces += "  ";
        }

        for (int j = 1; j <= i; j++){
            row += to_string(j);
        }

        for (int j = i - 1; j >= 1; j--){
            row += to_string(j);
        }

        cout << spaces + row << endl;
    }

    return 0;
}