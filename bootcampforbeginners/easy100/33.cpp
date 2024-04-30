#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    string s;
    cin >> a >> b >> s;
    for(int i=0; i<a+b+1; i++){
        if(i == a){
            if(s[i] != '-'){
                cout << "No" << endl;
                return 0;
            };
        }else if((int)s[i] < 48 || (int)s[i] > 57){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}