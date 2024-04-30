#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> cnt(9, 0);
    for(int i=0; i<n; i++){
        for(int rank=0; rank<8; rank++){
            if(a[i] >= rank*400 && a[i] < (rank+1)*400){
                cnt[rank] = 1;
                break;
            }
        }
        if(a[i] >= 3200) cnt[8]++;
    }
    int min = 0;
    int max = 0;
    for(int i=0; i<8; i++){
        min += cnt[i];
    }
    max = min + cnt[8];
    if(min==0) cout << 1 << ' ' << max << endl;
    else cout << min << ' ' << max << endl;
}