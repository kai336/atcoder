#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = str.length() - 2; i >= 2; i--){
        string L, R;
        L = str.substr(0,(i + 1) / 2);
        R = str.substr((i + 1) / 2, (i + 1) / 2);
        if(L == R){
            cout << i << endl;
            break;
        }
    }
}