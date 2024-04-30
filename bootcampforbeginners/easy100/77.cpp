#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(3*n);
    for(int i=0; i<3*n; i++){
        cin >> a.at(i);
    }

    sort(a.begin(), a.end());
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += a.at(3*n-2-i*2);
    }

    cout << ans << endl;
}