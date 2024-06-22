#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

int a[200010];

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int tmp; 
        cin >> tmp;
        a[i] = tmp - 1;
    }
    
    ll ans = 0;
    vector<bool> visited(n, false);
    
    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            set<int> seen;
            int v = i;
            while(seen.find(v) == seen.end()) {
                seen.insert(v);
                visited[v] = true;
                v = a[v];
            }
            ans += seen.size();
        }
    }
    
    cout << ans << endl;
    return 0;
}
