#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = 0;
    for(int i=2; i<=10; i++){
        int tmp = pow((int)pow(x, (float)1/i), i);
        ans = max(tmp, ans);
    }
    cout << ans << endl;
}