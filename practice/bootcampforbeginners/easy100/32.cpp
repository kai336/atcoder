#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    int val = 0;
    for(int i=0; i<n; i++){
        switch(s[i]){
            case 'I':
                val++;
                ans = max(ans, val);
                break;
            case 'D':
                val--;
                break;
            default:
                break;
        }
    }
    cout << ans << endl;
}