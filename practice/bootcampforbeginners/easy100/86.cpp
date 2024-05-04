#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    long long k;
    cin >> s >> k;
    if(k==1){
        cout << s[0] << endl;
        return 0;
    } else{
        long long last = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') last++;
            else break;
        }
        if(k>last) cout << s[last] << endl;
        else cout << '1' << endl;
    }
    return 0;
}