#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int c[n];
    vector<string> s(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> s[i] >> c[i];
        sum += c[i];
    }
    int win = sum % n;
    sort(s.begin(), s.end());
    cout << s[win] << endl;
}