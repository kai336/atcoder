#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main(){
    int n, m;
    cin >> n >> m;
    int h[n];
    for(int i=0; i<n; i++) cin >> h[i];
    int ans = 0;
    for(int i=0; i<n; i++){
        m -= h[i];
        if(m>=0) ans++;
        else break;
    }
    cout << ans << endl;

    return 0;
}