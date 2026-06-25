#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--){
        // print spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }

        // print stars
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}