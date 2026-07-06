#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string spaces = string(n - i, ' ');
        string number = string(i, (char)i);

        cout << spaces + number << endl;
    }

    return 0;
}