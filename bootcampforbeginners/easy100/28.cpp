#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool isodd = false;
    int ans = 0;
    while(!isodd){
        for(int i=0; i<n; i++){
            if(a[i] % 2 == 1){
                isodd = true;
            }
            a[i] /= 2;
        }
        if(!isodd) ans++;
    }
    cout << ans << endl;
}