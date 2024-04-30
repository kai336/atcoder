#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    int zeros = 0;
    int ones = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='0') zeros++;
        else ones++;
    }
    cout << min(zeros, ones)*2 << endl;
}