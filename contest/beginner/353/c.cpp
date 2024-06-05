#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long mod = 100000000;

int main(){
    long long n;
    cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++) cin >> a[i];
    long long ans = 0;
    for(long long i=0; i<n-1; i++){
        for(long long j=i+1; j<n; j++){
            ans += (a[i]+a[j])%mod;
        }
    }
    cout << ans << endl;
}