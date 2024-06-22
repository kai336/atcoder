#include <bits/stdc++.h>
#include <math.h>
#define ull unsigned long long
#define ll long long
using namespace std;

int main(){
    ll sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    if(sx<tx){
        if((sx+sy)%2==1) sx--;
        if((tx+ty)%2==1) tx--;
    }else{
        if((sx+sy)%2==0) sx++;
        if((tx+ty)%2==0) tx++;
    }
    ll ans = abs(ty - sy);
    if(abs(tx - sx) > ans){
        ans += (abs(tx-sx)-ans)/2;
    }
    cout << ans << endl;
    return 0;
}