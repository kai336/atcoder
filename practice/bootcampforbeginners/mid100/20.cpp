#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    map<long long, int> cnt;
    for(int i=0; i<n; i++){
        cnt[a[i]] = not cnt[a[i]];
    }
    int ans = 0;
    for(auto i=cnt.begin(); i!=cnt.end(); i++){
        ans += i->second;
    }
    cout << ans << endl;
    return 0;
} 