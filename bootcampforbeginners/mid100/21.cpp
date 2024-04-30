#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];
    map<long long, long long> cnt;
    for(int i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    long long sum = 0;
    for(auto c=cnt.begin(); c!=cnt.end(); c++){
        long long tmp = c->second;
        sum += tmp*(tmp-1)/2;
    }
    for(int i=0; i<n; i++){
        long long ans = sum;
        long long tmp = cnt[a[i]];
        ans -= tmp*(tmp-1)/2 - (tmp-1)*(tmp-2)/2;
        cout << ans << endl;
    }
    return 0;
}