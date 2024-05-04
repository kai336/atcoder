#include <bits/stdc++.h>
using namespace std;

int main(){
    long long q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;
    long long ans = min(8*q, min(4*h, min(2*s, d))) * (n/2) + min(4*q, min(2*h, s)) * (n%2);

    cout << ans << endl;
}