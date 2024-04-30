#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    string ans[h+2];
    ans[0] = string(w+2, '#');
    ans[h+1] = ans[0];
    for(int i=1; i<=h; i++){
        cin >> ans[i];
        ans[i] = '#' + ans[i] + '#';
    }

    for(int i=0; i<h+2; i++){
        cout << ans[i] << endl;
    }
}