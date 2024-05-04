#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    int ans;
    if(n.size() == 1){
        ans = (int)(n[0] - '0');
        cout << ans << endl;
        return 0;
    }
    for(int i=1; i<n.size(); i++){
        if(n[i] != '9'){
            ans = 9 * (n.size() - 1) + (int)(n[0]-'0') - 1;
            cout << ans << endl;
            return 0;
        }
    }
    ans = 9 * (n.size() - 1) + (int)(n[0]-'0');
    cout << ans << endl;
    return 0;
    
}