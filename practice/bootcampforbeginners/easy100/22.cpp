#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long x;
    cin >> n >> x;
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int ans = 0;
    for(int i=0; i<n; i++){
        x -= a[i];
        if(x >= 0) ans++;
        else break;
    }
    if(x > 0) ans--;
    cout << ans << endl;
}