#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main(){
    int ans = 0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s=="Takahashi") ans++;
    }
    cout << ans <<  endl;
    return 0;
}