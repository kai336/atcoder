#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a, b;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        a.push_back(s);
    }
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        b.push_back(s);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=b[i][j]){
                cout << i+1 << ' ' << j+1 << endl;
                return 0;
            }
        }
    }
    return 0;
}