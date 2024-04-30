#include <bits/stdc++.h>
using namespace std;

int MAX = 1000000;

int main(){
    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s.at(i);
    }
    sort(s.begin(), s.end());
    for(auto str: s){
        cout << str;
    }
    cout << endl;
}