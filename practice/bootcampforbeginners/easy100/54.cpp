#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> w(n);
    string ans = "Yes";
    for(int i=0; i<n; i++){
        cin >> w.at(i); 
    }

    for(int i=1; i<n; i++){
        if(w.at(i)[0] != w.at(i-1)[w.at(i-1).size()-1]) ans = "No";
        for(int j=0; j<i; j++){
            if(w.at(j) == w.at(i)) ans = "No";
        }
    }

    cout << ans << endl;

}