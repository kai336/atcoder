#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    int ans = 0;
    cin >> n;
    vector<int> a(n*2);
    for(int i=0; i<n*2; i++) cin >> a[i];
    for(int i=1; i<n+1; i++){
        bool found = false;
        int l, r;
        for(int j=0; j<n*2; j++){
            if(a[j]==i){
                if(found){
                    r = j;
                    break;
                }else{
                    found = true;
                    l = j;
                }
            } 
        }
        if(r-l==2) ans++;
    }
    cout << ans << endl;
    return 0;
}