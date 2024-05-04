#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> a.at(i).at(0);
        a.at(i).at(1) = i;
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        cout << a.at(i).at(1) + 1 << ' ';
    }
    cout << endl;
}