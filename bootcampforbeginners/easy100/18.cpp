#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string agct = "AGCT";
    int ans = 0;
    int tmp = 0;
    for(int i=0; i<s.size(); i++){
        bool isagct = false;
        for(int j=0; j<4; j++){
            if(s[i] == agct[j]){
                tmp++;
                isagct = true;
                break;
            }
        }
        ans = max(ans, tmp);
        if(!isagct){
            tmp = 0;
        }
    }
    cout << ans << endl;
}