#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    long long a[n], sum[n+1];
    int l[q], r[q];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<q; i++) cin >> l[i] >> r[i];

    sum[0] = 0;
    for(int i=0; i<n; i++) sum[i+1] = sum[i] + a[i];

    for(int i=0; i<q; i++){
        int ans = sum[r[i]] - sum[l[i]-1];
        cout << ans << endl;
    }
}