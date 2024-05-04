#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int dp[s.size()];
    dp[0] = 1;
    if(s[1] != s[0]) dp[1] = 2;
    else dp[1] = 1;
    if(s[2] != s[1]) dp[2] = dp[1] + 1;
    else dp[2] = 1;
    for(int i=3; i<n; i++){
        if(s[i] != s[i-1]) dp[i] = dp[i-1] + 1;
        else dp[i] = dp[i-3] + 2;
    }
}

//fk DP