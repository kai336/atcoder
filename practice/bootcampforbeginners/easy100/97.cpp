#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<long long, int>> ab(n);
    for(int i=0; i<n; i++){
        cin >> ab.at(i).first >> ab.at(i).second;
    }
    sort(ab.begin(), ab.end());
    long long ans = 0;
    int num = 0;
    for(int i=0; i<n; i++){
        num += ab.at(i).second;
        ans += ab.at(i).first * ab.at(i).second;
        if(num >= m){
            int diff = num - m;
            ans -= diff * ab.at(i).first;
            cout << ans << endl;
            return 0;
        }
    }
}