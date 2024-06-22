#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

struct Max{
    ull val;
    int idx;
};

int main() {
    int n;
    cin >> n;
    vector<ull> h(n), ans(n);
    for(int i=0; i<n; i++) cin >> h[i];
    ull max = h[0];
    ans[0] = h[0] + 1;
    for(int i=1; i<n; i++){
        if(max <= h[i]){
            max = h[i];
            ans[i] = h[i] * (i+1) + 1;
        }else{
            int idx = 0;
            for(int j=i-1; j>=0; j--){
                if(h[i]<h[j]){
                    idx = j;
                    break;
                }
            }
            ans[i] = ans[idx] + h[i] * (i-idx);
        }
    }
    for(int i=0; i<n; i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}
