#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(2, vector<int>(n));
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin >> a.at(i).at(j);
        }
    }
    
    int sum1 = a.at(0).at(0);
    int sum2 = 0;
    for(int i=0; i<n; i++){
        sum2 += a.at(1).at(i);
    }

    int ans = sum1 + sum2;
    for(int i=1; i<n; i++){
        sum1 += a.at(0).at(i);
        sum2 -= a.at(1).at(i-1);
        ans = max(ans, sum1 + sum2);
    }

    cout << ans << endl;
}