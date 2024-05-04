#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    int n, w, s, e;
    n = 0;
    w = 0;
    s = 0;
    e = 0;
    for(int i=0; i<S.size(); i++){
        switch(S[i]) {
            case 'N':
                n = 1;
                break;
            case 'W':
                w = 1;
                break;
            case 'S':
                s = 1;
                break;
            case 'E':
                e = 1;
                break;
            default:
                break;
        }
            
    }
    string ans;
    if(n != s || w != e) ans = "No";
    else ans = "Yes";
    cout << ans << endl;
}