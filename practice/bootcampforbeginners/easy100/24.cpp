#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, M;
    cin >> A >> B >> M;
    int a[A], b[B], x[M], y[M], c[M];
    int amin = 100010;
    for(int i=0; i<A; i++){
        cin >> a[i];
        amin = min(amin, a[i]);
    }
    int bmin = 100010;
    for(int i=0; i<B; i++){
        cin >> b[i];
        bmin = min(bmin, b[i]);
    }
    for(int i=0; i<M; i++){
        cin >> x[i] >> y[i] >> c[i];
    }

    int ans = amin + bmin;
    for(int i=0; i<M; i++){
        int tmp = a[x[i]-1] + b[y[i]-1] - c[i];
        ans = min(ans, tmp);
    }

    cout << ans << endl;
}