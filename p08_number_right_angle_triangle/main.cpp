#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string row = "";
        for(int j = 1; j <= i; j++){
            row += to_string(j);
        }
        cout << row << endl;
    }

    return 0;
}