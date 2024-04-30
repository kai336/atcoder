#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 999;
    for(int i=2; i<s.size(); i++){
        ans = min(ans, abs(753 - stoi(s.substr(i-2, 3))));
    }
    cout << ans << endl;
}