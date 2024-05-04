#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    int l[n], r[n];
    for(int i=0; i<n; i++) cin >> l[i] >> r[i];
    vector<int> diff(d+1, 0);
    for(int i=0; i<n; i++){
        diff[l[i]-1]++;
        diff[r[i]]--;
    }
    int ans = 0;
    for(int i=0; i<d; i++){
        ans += diff[i];
        cout << ans << endl;
    }
    return 0;
}