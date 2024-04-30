#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long n, t;
    cin >> n >> t;
    vector<long long> tt(n);
    for(int i=0; i<n; i++) cin >> tt[i];
    long long sum = t;
    for(int i=0; i<n-1; i++){
        sum += min(t, tt[i+1]-tt[i]);
    }
    cout << sum << endl;
    return 0;
} 