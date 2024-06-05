#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int c[m], a[m][n];
    char r[m];
    for(int i=0; i<m; i++){
        cin >> c[i];
        for(int j=0; j<c[i]; j++) cin >> a[i][j];
        cin >> r[i];
    }

    int ans = 0;
    for(int bit=0; bit<(1<<n); bit++){
        bool flag = true;
        for(int i=0; i<m; i++){
            int cnt = 0;
            for(int j=0; j<c[i]; j++){
                if(bit & (1 << (a[i][j]-1))) cnt++;
            }
            if((r[i]=='o' && cnt < k) || (r[i]=='x' && cnt >= k)){
                flag = false;
                break;
            }
        }
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}