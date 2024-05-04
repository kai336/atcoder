#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    int ans = 1;
    while(true){
        x*=2;
        if(x>y) break;
        else ans++;
    }
    cout << ans << endl;
}