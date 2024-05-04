#include <bits/stdc++.h>
using namespace std;

int main(){
    long long h;
    cin >> h;

    long long ans = pow(2, int(log2(h)) + 1) - 1;
    cout << ans << endl;
}