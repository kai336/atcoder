#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 1;
    for(int i=2; i<=n; i++){
        ans *= i;
        ans %= int(1e9 + 7);
    }
    cout << ans << endl;
}