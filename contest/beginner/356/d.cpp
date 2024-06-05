#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define ull unsigned long long

const ull MOD = 998244353;


int main(){
    ull n, m;
    cin >> n >> m;
    ull ans = 0;
    for(int i=0; i<60; i++){
        ull bitmask = 1ull << i;
        if((m >> i) & 1){
            ull count = (n+1) / (bitmask << 1) * (bitmask);
            count += max(0ull, (n+1) % (bitmask << 1) - (bitmask));
            cout << count << endl;
            ans += count;
            ans %= MOD;
        }
    }

    cout << ans << endl;
    return 0;
}