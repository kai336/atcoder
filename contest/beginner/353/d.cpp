#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long mod = 998244353;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++) cin >> a[i];
    long long ans = 0;
    for(long long i=1; i<n; i++){
        ans += a[i]*i;
        ans %= mod;
    }
    long long tmp[n];
    tmp[0] = a[0];
    for(long long i=1; i<n; i++) tmp[i] = tmp[i-1] + a[i];
    for(long long i=1; i<n; i++){
        int len = to_string(a[i]).length();
        ans += pow(tmp[i-1], len-1);
        ans %= mod;
    }
    cout << ans << endl;
}