#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a;
    cin >> n >> t >> a;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h.at(i);
    }

    int ans = 0;
    double tmpmin = abs(a - t + 0.006 * h.at(ans));
    for(int i=1; i<n; i++){
        double tmp = abs(a - t + 0.006 * h.at(i));
        if(tmp < tmpmin){
            ans = i;
            tmpmin = abs(a - t + 0.006 * h.at(ans));
        }
    }

    cout << ans + 1 << endl;
}