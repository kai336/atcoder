#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n-1];
    for(int i=0; i<n-1; i++){
        cin >> b[i];
        a[i+1] = b[i];
    }
    a[0] = b[0];
    for(int i=0; i<n-1; i++){
        if(b[i] < max(a[i], a[i+1])) a[i] = b[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += a[i];
    }

    cout << ans << endl;

}