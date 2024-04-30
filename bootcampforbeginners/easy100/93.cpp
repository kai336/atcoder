#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long len = 0;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);
    for(int i=0; i<n; i++) len += a.at(i);
    long long ans;
    long long l = 0;
    long long r = 0;
    for(int i=0; i<n; i++){
        l += a.at(i);
        r = len - l;
        long long tmp = abs(l-r);
        if(i==0) ans = tmp;
        else ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}