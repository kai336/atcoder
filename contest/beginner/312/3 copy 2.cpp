#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<long long, char>> a(n, pair<long long, 'a'>), b(m, pair<long long, 'b'>);
    for(int i=0; i<n; i++){
        cin >> a.at(i).first;
    }
    for(int i=0; i<m; i++){
        cin >> b.at(i).first;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a.at(0).first >= b.at(m-1).first){
        cout << b.at(m-1).first + 1 << endl;
    }
    vector<pair<long long, char>> c = a + b;
    sort(c.begin(), c.end());

    for(int i=0; i<n+m; i++){
        for()
    }

}