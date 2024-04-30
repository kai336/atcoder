#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> sc;
    for(int i=0; i<m; i++){
        int s, c;
        cin >> s >> c;
        s = 3 - s + 1;
        sc.push_back({s, c});
    }
    sort(sc.begin(), sc.end());
    
    for(int i=1; i<m; i++){
        if(sc[i].first==sc[i-1].first && sc[i].second!=sc[i-1].second){
            cout << -1 << endl;
            return 0;
        }
    }
    int num = sc[0].second * pow(10, sc[0].first-1);
    for(int i=1; i<m; i++){
        if(sc[i].first!=sc[i-1].first)
        num += sc[i].second * pow(10, sc[i].first-1);
    }
    if(num>=pow(10, n-1) || (num==0 && n==1)) cout << num << endl;
    else cout << -1 << endl;
    return 0;
}