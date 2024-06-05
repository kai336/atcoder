#include <bits/stdc++.h>
#include <math.h>

using namespace std;
#define ull unsigned long long

int main(){
    ull a, b, x;
    cin >> a >> b >> x;
    ull ans = 0;
    ans = b/x+1;
    if(a!=0) ans -= (a-1)/x+1;

    cout << ans << endl;

}