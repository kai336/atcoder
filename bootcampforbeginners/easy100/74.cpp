#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int ans = INFINITY;
    int tmp;
    for(int i=0; i<200010; i++){
        tmp = c * i;
        int X = x - i / 2;
        int Y = y - i / 2;
        if(X > 0) tmp += a * X;
        if(Y > 0) tmp += b * Y;
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}

//zentansaku igaito ikeru