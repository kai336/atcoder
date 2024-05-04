#include <bits/stdc++.h>
#include <math.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    int max = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > max) max = a[i];
    }
    max++;
    vector<int> cnt(max, 0);
    for(int i=0; i<n; i++){
        cnt[a[i]]++;
    }
    int ans = 0;
    if(max>=3){
       for(int i=0; i<max-2; i++){
            int tmp = cnt[i] + cnt[i+1] + cnt[i+2];
            if(tmp > ans) ans = tmp;
        } 
    }else {
        for(int i=0; i<max; i++){
            ans += cnt[i];
        }
    }
    
    cout << ans << endl;
    return 0;
}