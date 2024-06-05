#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    for(int i=1; i<l; i++) cout << i << ' ';
    for(int i=r; i>=l; i--) cout << i << ' ';
    for(int i=r; i<n; i++) cout << i+1 << ' ';
    cout << endl;

    return 0;
}