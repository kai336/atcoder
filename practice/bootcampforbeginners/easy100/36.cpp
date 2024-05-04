#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int lmax, rmin;
    lmax = 0; rmin = n + 1;
    for(int i=0; i<m; i++){
        int l, r;
        cin >> l >> r;
        lmax = max(lmax, l);
        rmin = min(rmin, r);
    }
    int ans;
    if(lmax > rmin) ans = 0;
    else ans = rmin - lmax + 1;
    cout << ans << endl;
}