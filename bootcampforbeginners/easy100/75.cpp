#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> h(n);
    for(int i=0; i<n; i++){
        cin >> h.at(i);
    }
    sort(h.begin(), h.end());
    long long ans = INFINITY;
    
    for(int i=0; i<n-k+1; i++){
        long long tmp;
        tmp = h.at(i+k-1) - h.at(i);
        ans = min(tmp, ans);
    }

    cout << ans << endl;
}