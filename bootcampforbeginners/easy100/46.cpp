#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000000000000000

int main(){
    long long a, b, c, k;
    cin >> a >> b >> c >> k;
    long long aa = b - a;
    long long bb = c - a;
    if(aa > MAX){
        cout << "Unfair" << endl;
        return 0;
    }

    int ans;
    if(k % 2 == 0){
        ans = -aa;
    }else ans = aa;

    cout << ans << endl;
    
}