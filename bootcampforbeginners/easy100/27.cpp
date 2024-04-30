#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans = a * (long long)(n / (a + b)) + min(a, n-(a+b)*(long long)(n/(a+b)));
    cout << ans << endl;
}