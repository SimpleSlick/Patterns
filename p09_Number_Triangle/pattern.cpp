#include<iostream>
#include<string>

using namespace std;

int main(){
    int row;
    cin >> row;

    for(int i = 1; i <= row; i++){
        char rowNum = i + '0';
        string num = string(i, rowNum);

        cout << num << endl;
    }

    return 0;
}