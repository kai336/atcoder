#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d[n];
    for(int i=0; i<n; i++){
        cin >> d[i];
    }

    sort(d, d+n);

    int mid = n / 2;
    int ans = d[mid] - d[mid-1];
    cout << ans << endl;
}