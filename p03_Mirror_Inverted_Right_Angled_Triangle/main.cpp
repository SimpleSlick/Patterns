#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string spaces = string(i, ' ');
        string stars = string((n - i + 1), '*');

        cout << spaces + stars << endl;
    }
}