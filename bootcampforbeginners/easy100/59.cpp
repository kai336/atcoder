#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "AC";
    if(s[0] != 'A') ans = "WA";
    else if(s[1] < 'a' || s[1] > 'z') ans = "WA";
    else {
        int ccnt = 0;
        for(int i=2; i<s.size()-1; i++){
            if(s[i] == 'C') {
                ccnt++;
                if(ccnt > 1) {
                    ans = "WA";
                    break;
                }
            }else if(s[i] < 'a' || s[i] > 'z'){
                ans = "WA";
                break;
            }
        }
        if(s[s.size()-1] < 'a' || s[s.size()-1] > 'z' || ccnt == 0) ans = "WA";
    }
    
    cout << ans << endl;
}