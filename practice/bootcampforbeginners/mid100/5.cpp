#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans;
    if(n <= 2){
        ans = n - 1;
    }else {
        ans = n * (n - 1) / 2;
    }
    cout << ans << endl;
}