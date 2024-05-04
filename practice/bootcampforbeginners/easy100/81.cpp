#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a.at(i);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        while(true){
            if(a.at(i) % 2 == 0){
                a.at(i) /= 2;
                ans++;
            }else break;
        }
    }
    cout << ans << endl;
}