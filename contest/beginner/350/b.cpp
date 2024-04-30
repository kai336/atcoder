#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int t[q];
    for(int i=0; i<q; i++) cin >> t[i];
    vector<int> cnt(n, 1);
    for(int i=0; i<q; i++){
        if(cnt[t[i]-1]==1) cnt[t[i]-1]--;
        else cnt[t[i]-1]++;
    }
    int ans = 0;
    for(int i=0; i<n; i++) ans += cnt[i];
    cout << ans << endl;
}