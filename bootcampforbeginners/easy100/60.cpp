#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> t(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> t.at(i);
        sum += t.at(i);
    }
    cin >> m;
    vector<int> p(m), x(m);
    for(int i=0; i<m; i++){
        cin >> p.at(i) >> x.at(i);
    }
    for(int i=0; i<m; i++){
        int ans = sum - t.at(p.at(i)-1) + x.at(i);
        cout << ans << endl;
    }
}