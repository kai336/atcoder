#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    int a[m];
    for(int i=0; i<m; i++){
        cin >> a[i];
    }
    int idx;
    for(int i=0; i<n; i++){
        if(a[i] > x){
            idx = i;
            cout << max(0, min(idx, m-idx)) << endl;
            break;
        }
    }
}