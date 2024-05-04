#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans;
    if((a - b) % 2 == 0){
        ans = (b - a) / 2;
    }else{
        ans = min(a - 1, n - b) + 1 + (b - a - 1) / 2;
    }
    cout << ans << endl;
}