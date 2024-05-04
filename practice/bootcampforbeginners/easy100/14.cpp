#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long mod = n % k;
    long long ans = min(mod, k - mod);
    cout << ans << endl;
}