#include <bits/stdc++.h>
#include <math.h>
using namespace std;

long long mod = 100000000;


int main(){
    unsigned long long k;
    cin >> k;
    unsigned long long sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    unsigned long long ans;
    if(k<3) ans = abs((long long)(sx - tx)) + abs((long long)(sy - ty)); 
    cout << ans << endl;
    return 0;
}