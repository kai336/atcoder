#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string k = "keyence";
    int l=0;
    int r=0;
    for(int i=0; i<7; i++){
        if(s[i]==k[i]){
            l++;
        }else break;
    }
    for(int i=0; i<7; i++){
        if(s[s.size()-1-i]==k[k.size()-1-i]){
            r++;
        }else break;
    }
    if(l+r>=7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
} 