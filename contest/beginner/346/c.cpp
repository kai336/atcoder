#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main(){
    int N, K;
    cin >> N >> K;
    vector<unsigned long long> a(N);
    for(int i=0; i<N; i++) cin >> a[i];
    sort(a.begin(), a.end());
    unsigned long long sum;
    if(K%2==0){
        sum = K/2;
        sum *= K+1;
    }else{
        sum = (K+1)/2;
        sum *= K;
    }
    vector<unsigned long long> seen(1,0);
    if(a[0] <= K) sum -= a[0];
    for(int i=1; i<N; i++){
        if(a[i] <= K && a[i] != a[i-1]){
            sum -= a[i];
        }
    }
    cout << sum << endl;
    return 0;
}