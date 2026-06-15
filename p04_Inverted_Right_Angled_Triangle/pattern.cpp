#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--){
        string row = string(i, '*');
        cout << row << endl;
    }

    return 0;
}