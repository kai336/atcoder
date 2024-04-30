#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<vector<long long>> ab(n, vector<long long>(2));
    for(int i=0; i<n; i++){
        cin >> ab.at(i).at(0) >> ab.at(i).at(1);
    }
    sort(ab.begin(), ab.end());
    int sum = 0;
    int idx;
    int ans;
    bool isfound = false;
    for(int i=n-1; i>=0; i--){
        sum += ab.at(i).at(1);
        if(sum > k){
            idx = i;
            isfound = true;
            break;
        }
    }
    if(isfound) ans = ab.at(idx).at(0) + 1;
    else ans = 1;
    cout << ans << endl;
}