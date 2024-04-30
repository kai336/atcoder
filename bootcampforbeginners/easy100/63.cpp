#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a.at(i);

    int tmp = 1;
    int ans = n;
    for(int i=0; i<n; i++){
        if(a.at(i)==tmp){
            ans--;
            tmp++;
        }
    }
    if(ans == n) cout << -1 << endl;
    else cout << ans << endl;
}