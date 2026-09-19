#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        char letter = 'A' + i;
        string row = string(1, letter);
        row = string(i + 1, letter);

        cout << row + " " << endl;
    }

    return 0;
}