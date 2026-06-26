#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        string row = "";

        for(int j = 1; j <= i; j++){
            if((i + j) % 2 == 0){
                row += "1 ";
            }else{
                row += "0 ";
            }
        }

        cout << row << endl;
    }

    return 0;
}