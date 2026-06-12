#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string spaces = string((n - i), ' ');
        string stars = string(i, '*');

        cout << spaces + stars << endl;
    }
    return 0;
}