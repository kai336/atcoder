#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long long M = 1000000000 + 7;
int main(){
    int n;
    long long k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]) cnt++;
        }
    }
    int cnt2 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] > a[j]) cnt2++;
        }
    }
    long long ans = 0;
    long long kk = k * (k-1) / 2;
    kk %= M;
    ans = cnt * k;
    ans %= M;
    ans += cnt2 * kk;
    ans %= M;
    cout << ans << endl;
    return 0;
}