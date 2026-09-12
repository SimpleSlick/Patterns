#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    // top portion
    for(int i = 1; i <= n; i++){
        string stars = string(i, '*');
        cout << stars << endl;
    }

    
    for(int i = n - 1; i >= 1; i--){
        string stars = string(i, '*');
        cout << stars << endl;
    }
    
    return 0;
}