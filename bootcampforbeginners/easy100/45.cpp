#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i=a; i<=b; i++){
        string s = to_string(i);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(s == rev) ans++;
    }
    cout << ans << endl;
}