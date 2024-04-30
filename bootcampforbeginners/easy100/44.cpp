#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int diff0, diff1;
    diff0 = 0; diff1 = 0;
    for(int i=0; i<s.size(); i+=2){
        diff0 += (int)s[i] - (int)'0';
        diff1 += 1 - (int)s[i] + (int)'0';
    }
    for(int i=1; i<s.size(); i+=2){
        diff0 += 1 - (int)s[i] + (int)'0';
        diff1 += (int)s[i] - (int)'0';
    }
    int ans = min(diff0, diff1);
    cout << ans << endl;

}