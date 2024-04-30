#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    pair<pair<string, int>, int> SP[n];
    for(int i=0; i<n; i++){
        string s;
        int p;
        cin >> s >> p;
        SP[i].first = make_pair(s, -1*p);
        SP[i].second = i;
    }

    sort(SP, SP+n);

    for(int i=0; i<n; i++){
        cout << SP[i].second + 1 << endl;
    }
}