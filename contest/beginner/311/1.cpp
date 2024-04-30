#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    bool a, b, c;
    a = false;
    b = false;
    c = false;
    for(int i=0; i<n; i++){
        switch(s[i]){
            case 'A':
                a = true;
                break;
            case 'B':
                b = true;
                break;
            case 'C':
                c = true;
                break;
            default:
                break;
        }
        if(a && b && c){
            cout << i + 1 << endl;
            return 0;
        }
    }
}