#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = x;
    
    while(true){
        bool isprime = true;
        for(int i=2; i<ans; i++){
            if(ans % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime) break;
        else ans++;
    }
    cout << ans << endl;
}